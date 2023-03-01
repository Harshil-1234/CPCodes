#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

//by declaring array global, all its value is automatically set to 0
bool hsh[MAX+1][2];

void search(int k){
    if(k>=0){
        if(hsh[k][0]){
            cout<<"PRESENT"<<endl;
        }
        else{
            cout<<"ABSENT"<<endl;
        }
    }
    else{
        if(hsh[abs(k)][1]){
            cout<<"PRESENT"<<endl;
        }
        else{
            cout<<"ABSENT"<<endl;
        }
    }
}

void mapping(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            hsh[arr[i]][0] =  true;
        }
        else{
            hsh[abs(arr[i])][1] = true;
        }
    }
}

int main(){
    int arr[]= {1,-5,10,-3,11,-50};
    int n = sizeof(arr)/sizeof(int);
    mapping(arr,n);
    int k;
    cin>>k;
    search(k);
    return 0;
}