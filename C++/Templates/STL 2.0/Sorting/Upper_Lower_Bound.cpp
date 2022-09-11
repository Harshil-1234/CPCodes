#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr = lower_bound(a,a+n,6);
    int *ptr2 = upper_bound(a,a+n,25);
    if(ptr==a+n && ptr2==a+n){
        cout<<"Not Found"<<endl;
        return 0;
    }
    cout<<(*ptr)<<" "<<(*ptr2)<<endl;
    return 0;
}