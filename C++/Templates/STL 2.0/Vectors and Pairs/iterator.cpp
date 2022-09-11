#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={2,3,4,5,6,7};
    // vector<int> :: iterator it = v.begin();
    // for(int i=0;i<v.size();i++){
    //     cout<<i+1<<" element in vector: "<<*(it+i)<<endl;
    // }
    // for (it = v.begin(); it!=v.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    // vector<pair<int,int>> :: iterator it_p;
    // for (it_p = v_p.begin(); it_p!=v_p.end(); it_p++)
    // {
    //     // cout<<(*(it_p)).first<<" "<<(*(it_p)).second<<endl;
    //     cout<<(it_p)->first<<" "<<(it_p)->second<<endl;
    // }

    //RANGE BASED LOOP
    for(int val : v){
        cout<<val<<" ";
    }
    cout<<endl;

    for(pair<int,int> val : v_p){
        cout<<val.first<<" "<<val.second<<endl;
    }
    
    return 0;
}