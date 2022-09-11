#include<bits/stdc++.h>
using namespace std;

const long long int M = 1e18+7;

int binMultiply(long long int a, long long int b){
    int ans =1;
    while(b){
        if(b&1){
            ans = (ans + a)%M;
        }
        a = (a+a)%M;
        b>>=1;
    }
    return ans;

}

//Time Complexity: O(log^2(b))
int binExp(int a, int b){
    int ans =1;
    while(b){
        if(b&1){
            ans = binMultiply(ans,a);
        }
        a = binMultiply(a,a);
        b>>=1;
    }
    return ans;
}


int main(){
    int a =2 , b = 10;
    cout<<binExp(a,b)<<endl;
    cout<<binMultiply(a,b)<<endl;
    return 0;
}