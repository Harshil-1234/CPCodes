#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

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

/*
There are K toffees and N children (K<N)
Count the number of ways to distribute toffee among N students such that each student gets only 1 toffee.
K<N<10^6
M = 10^9+7
Solution : nCk = n!/((n-r)! * r!)
*/

const int N = 1e6+10;
int fact[N];

int main(){
    fact[0] = 1;
    for(int i =1;i<=N;i++){
        fact[i] = (fact[i-1] * 1LL * i)%M;
    }
    int q;cin>>q;
    while(q--){
        int chld,tof;
        cin>>chld>>tof;
        int ans = fact[chld];
        int den = (fact[chld-tof] * 1LL * fact[tof]) % M;
        ans = ans * binExp(den,M-2,M);
        cout<<ans<<endl; 
    }
    return 0;
}