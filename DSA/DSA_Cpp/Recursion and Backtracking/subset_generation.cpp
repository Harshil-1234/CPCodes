#include<bits/stdc++.h>
using namespace std;

void generateSubset(vector<int>&num, int i, vector<int>&subset,vector<vector<int>> &ans){
    //To generate subsets we can either include a particular element or ignore it.

    //Base Condition:
    if(i==num.size()){
        ans.push_back(subset);
        return;
    }

    //when ith element is included:
    subset.push_back(num[i]);
    generateSubset(num,i+1,subset,ans);

    //when ith element is NOT included:
    subset.pop_back();
    generateSubset(num,i+1,subset,ans);
}

vector<vector<int>> returnAns(vector<int>&num){
    vector<int>subset;
    vector<vector<int>> ans;
    generateSubset(num,0,subset,ans);
    return ans;
}

int main(){
    int len; cin>>len;
    vector<int> num(len);
    for (int i = 0; i < len; i++){
        cin>>num[i];
    }

    vector<vector<int>> req_subsets = returnAns(num);
    for(auto subsets : req_subsets){
        for(auto final : subsets){
            cout<<final<<" ";
        }
        cout<<endl;
    }
    return 0;
}