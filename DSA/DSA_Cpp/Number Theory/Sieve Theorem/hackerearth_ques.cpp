//display number of divisors of P, Q or both
// count(P) + count(Q) - count(BOTH)

#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
int multiple_ct[N];
int hsh[N];

int main(){
    int size; cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        //Storing count of a number appearing in the array
        hsh[x]++;
    }
    //Iterating over multiples of i
    for(int i=1;i<N;i++){
        for(int j = i;j<N;j+=i){
            //storing count of times the multiple appears
            multiple_ct[i]+=hsh[j];
        }
    }
    int q;cin>>q;
    while(q--){
        int p,q;
        cin>>p>>q;
        long long lcm = p*1LL*q/__gcd(p,q);
        long long ans = multiple_ct[p] + multiple_ct[q];
        if(lcm<N){
            ans -= multiple_ct[lcm];
        }
        cout<<ans<<endl;
    }

    return 0;
}