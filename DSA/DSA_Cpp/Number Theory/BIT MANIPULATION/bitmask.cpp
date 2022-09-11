/*    QUESTION
Consider this problem: There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
*/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    //inputting the number of workers in company
    int num;
    cin>>num;
    vector<int> masks(num,0);

    for(int i=0;i<num;i++){
        //inputting number of days worker can work for.
        int num_days;
        cin>>num_days;
        int mask = 0;
        for(int j=0;j<num_days;j++){
            int days;
            cin>>days;
            //creating a number with set bit at number of days.
            mask = (mask |(1<<days));
        }
        masks[i] = mask; //storing set bit number in vector.
    }
    //selecting 2 workers
    int max_days = 0;
    int person_1 = -1;
    int person_2 = -1;
    for (int i = 0; i < num; i++){ //worker 1
        for (int j = i+1; j < num; j++){ //worker 2
            int intersection = masks[i] & masks[j];
            int common = __builtin_popcount(intersection);
            if(common>max_days){
                max_days = common;
                person_1 = i;
                person_2 = j;
            }
        }
    }
    cout<<"Worker-1: "<<person_1<<endl<<"Worker-2: "<<person_2<<endl<<"Common Days: "<<max_days<<endl;
    return 0;
}