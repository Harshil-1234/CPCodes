#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    // int a,b;
    cout<<gcd(4,12)<<endl;
    cout<<gcd(18,12)<<endl;
    cout<<__gcd(12,18)<<endl; //inbuilt function for gcd.
    cout<<"LCM:"<<endl;
    cout<<(18*12)/gcd(12,18)<<endl;
    return 0;
}