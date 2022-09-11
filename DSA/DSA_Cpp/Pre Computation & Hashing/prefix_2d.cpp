#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int ar[N][N];
long long pf[N][N];

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
    int size;cin>>size;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            cin>>ar[i][j];
            pf[i][j] = ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }

    int que;cin>>que;
    while(que--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        // long long sum =0;
        // for(int i=a;i<=c;i++){
        //     for(int j=b;j<=d;j++){
        //         sum+=ar[i][j];
        //     }
        // }
        cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;
    }
    return 0;
}