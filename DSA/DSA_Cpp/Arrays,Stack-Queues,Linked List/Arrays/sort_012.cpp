//Used 3 pointer technique to solve this question
//We will only make changes if we find 0 or 2.
#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr , int n){
    //right moves from end to beginning
    //mid iterates over each item
    //left to move from beginning to end.(left will point to 0 in the array always)
    int left = 0,mid = 0,right = n-1;

    //basic condition
    while(mid<=right){
        //since mid is iterating over each element of the array, if we find 0 anyhwere else means it is not present in beginning(required to sort). Thus we swap
        if(arr[mid]==0){
            swap(arr[left],arr[mid]);
            mid++;
            left++; //we found the 0, so no more use to point to it
        }
        else if(arr[mid]==1){
            //leave if 1 is found ans we want it to be in middle of series (0->1->2)
            mid++;
        }
        else{
            //if mid didn't find 0 or 1 means mid is pointing to 2. We want 2 at the end of the series.
            swap(arr[right],arr[mid]);
            right--;
        }
    }
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort012(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}