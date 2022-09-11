//Finding Sum of N natural numbers using Recursion.
#include<bits/stdc++.h>
using namespace std;

int numSum(int n){
    if(n==1){
        return 1;
    }
    int ans = 0;
    ans += numSum(n-1);
    return (n+ans) ;
}

int main(){
    int num;
    cin>>num;
    cout<<numSum(num);
    return 0;
}