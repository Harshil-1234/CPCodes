#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    int N;cin>>N;
    while(N--){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }


    return 0;
}