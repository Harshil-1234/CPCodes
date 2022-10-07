// Time Complexity -> O(n)
//Space Complexity -> O(1)
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i] ==key){
            cout<<"Element is present in the array at position ";
            return (i+1);
        }
    }
    cout<<"Element was not found in the array";
    return -1;
}

bool LinearSearchRecur(int arr[], int key,int size){
    //base case
    if(size == 0){
        return false;
    }
    if(key == arr[0]){
        return true;
    }
    else{
        bool  ans = LinearSearchRecur(arr+1,key,size-1);
        return ans;
    }
}

int main(){
    cout<<"Input the size of array you want ";
    int size;cin>>size;
    int arr[10];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //If array is empty-> No searching possible
    //Could have put the condition in Linear Search function but wanted to make code more interactive
    // if(size == 0){
    //     cout<<"Array is empty"<<endl;
    // }

    // else{
    //     cout<<endl<<"Input the element you want to search for ";
    //     int key;
    //     cin>>key;
    //     cout<<endl;
    //     // cout<<LinearSearch(arr,key,size)<<endl;
    // }

    /*------- Linear Search Using Recursion --------*/
    cout<<endl<<"Input the element you want to search for ";
    int key;
    cin>>key;
    cout<<endl;
    bool res = LinearSearchRecur(arr,key,size);
    if(res){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is NOT present"<<endl;
    }
    return 0;
}