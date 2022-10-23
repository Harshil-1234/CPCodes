// We iterate over the array and in each iteration we keep swapping the curr element with next element if the next
// element is smaller
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int size){
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void BubbleSort(int arr[], int size){
    // pick each element
    for(int i = 1;i<size;i++){
        bool swapped = false;
        // compare with the neighbour element
        for(int j = 0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        //if any round no swapping occurs -> array is sorted now
        if(swapped == false){
            cout<<"Array is already Sorted"<<endl;
            return;
        }
    }
}

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);

    cout<<"Before Bubble Sorting array is "<<endl;
    print(arr,size);

    BubbleSort(arr,size);

    cout<<"After Bubble Sorting array becomes "<<endl;
    print(arr,size);
    
    return 0;
}