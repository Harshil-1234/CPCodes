//We bring the minimum element in the array present in the beginning after searching the whole array
#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int size){
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SelectionSort(int arr[], int size){
    for(int i = 0;i<size-1;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int arr[] = {22,44,33,55,11};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Before Sorting array is "<<endl;
    print(arr,size);

    SelectionSort(arr,size);

    cout<<"After Sorting array becomes "<<endl;
    print(arr,size);
    return 0;
}