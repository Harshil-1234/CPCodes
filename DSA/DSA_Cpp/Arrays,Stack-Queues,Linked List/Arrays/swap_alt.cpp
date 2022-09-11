#include<bits/stdc++.h>
using namespace std;

void sawpAlt(int *arr,int size){
    int start = 0;
    int sub = 1;
    while(sub<size){
        swap(arr[start],arr[sub]);
        start+=2;
        sub+=2;
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;cin>>size;
    int arr[100000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"BEFORE SWAPPING ARRAY IS"<<endl;
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }cout<<endl;
    cout<<"AFTER SWAPPING ARRAY IS"<<endl;
    sawpAlt(arr,size);
    return 0;
}