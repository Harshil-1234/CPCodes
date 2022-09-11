#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<bool> isPrime(N,1);
//Q query < 10^7
//Each query : a number N < 10^7
//Check whether N is PRIME or NOT

int main(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<=N;i++){
        if(isPrime[i]){
            for(int j = 2*i;j<N;j+=i){
                isPrime[j] = 0;
            }
        }
    }
    int query;cin>>query;
    while(query--){
        int chk_num;
        cin>>chk_num;
        if(isPrime[chk_num]){
            cout<<chk_num<<" "<<"Is Prime"<<endl;
        }
        else{
            cout<<chk_num<<" "<<"Is NOT Prime"<<endl;
        }
    }
    return 0;
}

//Time Complexity : O(log(log(N))) --> For Sieve Algo concept of removing multiples.