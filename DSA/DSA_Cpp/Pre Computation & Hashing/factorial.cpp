#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
//storing maximum number in N(we had max limit of 10^ for N)
const int N = 1e5+10;
//Making an array of factorials size:N
long long fact[N];
//in the array ith index will denote ith number

int main(){
    //To take input from file
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //END
    
    //Main code from here
    fact[0] = fact[1] = 1;
    for(int i =2; i<N;i++){
        fact[i] = (fact[i-1] * i)%M; //3! = (3-1)! * 3
    }
    int t;
    cin>>t;
    while(t--){
        int num;cin>>num;
        // long long fact = 1;
        // for(int i = 2;i<=n;++i){
        //     fact = (fact*i)%M;
        // }
        cout<<fact[num]<<endl;
    }
  
    return 0;
}