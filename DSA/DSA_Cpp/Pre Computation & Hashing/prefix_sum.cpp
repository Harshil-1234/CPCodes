/* Given array of N integers and two integers L and R
print sum of numbers from indices L to R.(L,R inclusive)
Constraints:
N,Q<=10^5
a[i]<=10^9
L,R<=N
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];
int pf[N];

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
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int query;cin>>query;
    while(query--){
        int l,r;cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<endl;  
    }

    
    return 0;
}
