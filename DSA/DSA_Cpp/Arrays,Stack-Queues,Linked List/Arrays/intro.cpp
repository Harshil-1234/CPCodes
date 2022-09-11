//initialising whole array with a single value 
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[10] = {} or {0}; Fills whole array with zero
    //Above method works with 0 only
    // int arr[10] = {[0 ... 9] = 1};
    int arr[10];
    fill_n(arr,10,1);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0; 
}