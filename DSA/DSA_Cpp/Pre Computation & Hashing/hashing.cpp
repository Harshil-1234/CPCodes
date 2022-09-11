#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hsh[N];

int main(){
    //To take input from file
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //END
    
    //Main Code from here.
    int size;
    cin>>size;
    int a[size];
    for(int i = 0; i < size;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int que;
    cin>>que;
    while(que--){
        int num;
        cin>>num;
        cout<<num<<" "<<hsh[num]<<endl;
    }


    return 0;
}