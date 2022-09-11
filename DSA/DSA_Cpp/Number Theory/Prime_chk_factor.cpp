#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,i;
    cin>>num;

    //Check if number is PRIME OR NOT!!
    // if(num==1){
    //     cout<<"Not Prime"<<endl;
    //     // return -1;
    // }
    // bool is_Prime = true;
    // for(int i=2; i * i<=num;i++){
    //     if(num%i==0){
    //         is_Prime = false;
    //         break;
    //     }
    // }
    // cout<<is_Prime<<endl;

    //Prime Factorization
    vector<int> prime_factors;
    //O(N)
    // for(int i=2;i<=num;i++){
    //O(sqrt(N))
    for(i=2;i*i<=num;i++){
        while(num%i==0){
            prime_factors.push_back(i);
            num/=i;
        }
    }

    if(num>1){
        prime_factors.push_back(num);
    }

    for(int prime : prime_factors){
        cout<<prime<<" ";
    }
    cout<<endl;

    return 0;
}