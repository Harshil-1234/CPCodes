/*
K alphabets in a language, N length password (K>N)
An alphabet used only once in the password.

LOGIC: 
Ways to choose N alphabets from K --> KCN
Ways to arrange N alphabets --> N!
Final answer == N! * KCN
 */

#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
int fact[N];

int binExp(int a, int b,int m){
    int ans =1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a)%m;
        }
        a = (a*1LL*a)%m;
        b>>=1;
    }
    return ans;
}


int main(){
    fact[0] = 1;
    for(int i=1;i<N;i++){
        fact[i] = (fact[i-1] * 1LL * i)%M;
    }
    int turn;cin>>turn;
    while(turn--){
        int total,given;
        cin>>given>>total;
        int term1 = fact[given]; //N!
        // KCN == K! /((K-N)! * N!)
        int den = (fact[total - given] *1LL *fact[given]) % M;
        int term2 = fact[total] * binExp(den,M-2,M);
        //Final answer
        int ans = (term1 *1LL * term2)%M;
        cout<<ans<<endl;
    }
    return 0;
}