//We are provided with a range of numbers N. We have to create K possible combinations out of those N numbers.
#include<bits/stdc++.h>
using namespace std;

void generate(int i, long long N, int K,vector<int>&subset,
vector<vector<int>>&ans){
    if(K==0){
        ans.push_back(subset);
        return;
    }
    if(K>(N-i+1)){
        return;
    }

    if(i>N){
        return;
    }
    //include ith element
    subset.push_back(i);
    generate(i+1,N,K-1,subset,ans);
    subset.pop_back();

    //ignoring ith element
    generate(i+1,N,K,subset,ans);
}

vector<vector<int>> Combination(long long N,int K){
    vector<int>subset;
    vector<vector<int>>ans;
    generate(1,N,K,subset,ans);
    return ans;

}

int main(){
    long long N;cin>>N;
    int K;cin>>K;
    vector<vector<int>> result = Combination(N,K);
    for(auto first : result){
        for(auto final : first){
            cout<<final<<" ";
        }
        cout<<endl;
    }
    return 0;
}