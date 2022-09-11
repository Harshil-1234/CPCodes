//To find Divisor of a number N
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    int ct =0,sum=0;
    //BRUTE FORCE METHOD --> O(N)
    // for(int i=1;i<=N;i++){
    //     if(N%i==0){
    //         cout<<i<<endl;
    //     }
    // }

    //OPTIMIZED WAY-1 --> O(sqrt(N))
    for(int i=1; i*i<=N;i++){
        if(N%i==0){
            cout<<i<<" "<<N/i<<endl;
            ct+=1;
            sum+=i;
            if(N/i!=i){
                sum+=N/i;
                ct+=1;
            }
        }
    }
    cout<<ct<<" "<<sum<<endl;
    return 0;
}