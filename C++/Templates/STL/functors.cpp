//Function Objects (also called Functor): Function wrapped in a class so
//that it can be used
//like an object of that class

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={1,29,34,5,77,12};
    // sort(arr, arr+6); //sorts first 5 elements in ascending order.

    // sort(arr,arr+6, greater<int>()); //descending order sorting.

    for (int i = 0; i < 6; i++) 
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}