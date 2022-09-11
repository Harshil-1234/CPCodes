#include<bits/stdc++.h>
using namespace std;

int main(){
    //To take input from file
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //END
    
    //Brute Force approach
    int t;cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0] = backward[n+1] = 0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            forward[i] = __gcd(forward[i-1],arr[i]);
        }
        for(int i=n;i>=1;i--){
            backward[i] = __gcd(backward[i+1],arr[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            // int gc=0;
            // for(int i=1;i<=l-1;i++){
            //     gc = __gcd(gc,arr[i]);
            // }
            // for(int i=r+1;i<=n-1;i++){
            //     gc = __gcd(gc,arr[i]);
            // }
            // cout<<gc<<endl;
            cout<<__gcd(forward[l-1],backward[r+1])<<endl;
        }

    }
    return 0;
}