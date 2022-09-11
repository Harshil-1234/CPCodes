#include<iostream>
using namespace std;

int main(){
    //Swapping two numbers using XOR
    // int a =4,b =6;
    // cout<<"Before swapping: "<<a<<" "<<b<<endl;
    // a = a^b;
    // b=b^a; //Same as b^(a^b) == b^b^a == 0^a ==> b=a
    // a=a^b; // Same as (a^b)^a == a^a^b == 0^b ==> a=b
    // cout<<"After swapping: "<<a<<" "<<b<<endl;

    //Eleminating odd count integers in array
    int n,ans=0;cin>>n;
    int arr[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
    return 0;
}