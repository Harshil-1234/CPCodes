#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i]; 
    }
    sort(a,a+size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}