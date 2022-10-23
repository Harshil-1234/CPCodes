#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&arr){
    for(auto num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
}

void InsertionSort(vector<int>&arr, int n){
//loop 1 to pick each element and compare to sort
//assuming 1st element will be sorted, start from 1st index
    for(int i = 1;i<n;i++){
//storing the value of ith index
        int temp = arr[i];

        int j = i-1;
//second loop to compare ith element with the rest of the previous elements
        for(;j>=0;j--){
//if the ith element is less, shift it to the left of jth element(shift the ith element to the left of jth element which is greater)
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
//if the ith element is greater, shift it to the right of jth element(shift the ith element to the right of jth element which is smaller)
        arr[j+1] = temp;
    }
}

int main(){
    vector<int>arr = {55,22,11,66,33,77,33};
    int n = arr.size();
    cout<<"Array before Sorting"<<endl;
    print(arr); 

    InsertionSort(arr,n);

    cout<<"Array after Sorting"<<endl;
    print(arr);
    return 0;

}