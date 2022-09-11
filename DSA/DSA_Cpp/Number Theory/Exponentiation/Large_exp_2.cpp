#include<bits/stdc++.h> 
using namespace std;

const long long int M = 1e18+7; //Prime number: ETF(M)= M-1

int binExp(long long int a, long long int b, long long int m){
    long long int ans =1;
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
    // 50^(64^32)
    cout<<binExp(50,binExp(64,32,M-1),M)<<endl;
    return 0;
}