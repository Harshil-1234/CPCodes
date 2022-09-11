#include<bits/stdc++.h>
using namespace std;
const int N =1e7+10;
int ar[N];

int main(){
    //To take input from file
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //END
    
    //Main Code
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,d;
        cin>>a>>b>>d;
        ar[a] +=d;
        ar[b+1] -=d;
    }
    for(int i=1;i<=n;i++){
        ar[i] +=ar[i-1];
    }

    long long mx =-1;
    for(int i=1;i<=n;i++){
        if(mx<ar[i]){
            mx=ar[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}