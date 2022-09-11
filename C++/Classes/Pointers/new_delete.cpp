#include<iostream>
using namespace std;

int main(){
    //Basic Example of POINTERS.
    int a=4;
    int * ptr = &a;
    cout<<"The value of a is: "<<*ptr<<endl;

    //NEW keyword:
    int b = 40;
    // int * p = new int(40);
    float * p = new float(40.88); 
    cout<<"The value at pointer p is: "<<*p<<endl;

    int * arr = new int[3];
    //Method 1 of allocating:
    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // delete [] arr;

    //Method 2 of allocating:
    *(arr)=10;
    *(arr+1)=20;
    *(arr+2)=30;
    cout<<"The value at arr[0] is: "<<(arr[0])<<endl;
    cout<<"The value at arr[1] is: "<<(arr[1])<<endl;
    cout<<"The value at arr[2] is: "<<(arr[2])<<endl;
    return 0;
}