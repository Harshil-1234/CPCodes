//we have 2 ways to find unique elements
//Method 1: To store count of each element
//Method 2: To take XOR of whole array --> a^a = 0 , 0^a = a 
//Like this we can separate out the unique element
#include<bits/stdc++.h>
using namespace std;
//Storing count method
int findUniqueCount(int *arr, int size)
{
    int ans;
    int hsh[size] = {0};
    if(size==1) return arr[0];
    for(int i=0;i<size;i++){
        hsh[arr[i]]++;
    }
    for(int i=0;i<size;i++){
        if(hsh[i]==1){
            ans = i;
            return ans;
        }
    }
    return 0;
}

//Taking XOR method
int findUniqueXOR(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int size;cin>>size;
    int arr[1000];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    int res1 = findUniqueCount(arr,size);
    int res2 = findUniqueXOR(arr,size);

    cout<<res1<<" "<<res2;
    
    return 0;
}