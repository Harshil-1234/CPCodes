#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int> >&v){
    cout<<"SIZE: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
} 

int main(){
    // ********* PAIRS of VECTORS ************
    vector< pair<int,int> > v;//= { {1,2},{3,4},{4,5} };
    for(int i=0;i<5;i++){
        int num1,num2;
        cin>>num1>>num2;
        v.push_back(make_pair(num1,num2));
    }
    printVec(v);
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // printVec(v);

    // ************ ARRAYS of VECTORS *************
    // int N;  //declaring how many vectors we want
    // cin>>N;
    // vector<int> v[N]; //creating N vector-array

    // for (int i = 0; i < N; i++)
    // {
    //     int n;cin>>n; //input size of each vector;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int num;
    //         cin>>num;
    //         v[i].push_back(num);
    //     }
        
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }

    // ********** VECTOR of VECTOR
    // int N; //how many nested vectors we want.
    // cin>>N;
    // vector<vector<int> > v; //we will get N vectors;

    // for(int i=0;i<N;i++){
    //     //taking size of each vector;
    //     int size;cin>>size;
    //     vector<int> temp;
    //     for(int j=0;j<size;j++){
    //         int num;cin>>num;
    //         // v[i].push_back(num); //This statement isn't allowed as v[i] doesnot exist rn.
    //         temp.push_back(num);
    //     }
    //     v.push_back(temp);
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     printVec(v[i]);
    // }
    
    
    return 0;
}