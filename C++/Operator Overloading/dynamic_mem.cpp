#include<iostream>
using namespace std;

int main(){
    int size;
    int * ptr; //pointer of int type --> stores only int values.

    cout<<"Enter number of values to store in array: ";
    cin>>size;

    //Creating an 'integer' type array of length 'size'
    ptr = new int[size];

    cout<<"Enter values to be placed in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Values stored inside the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<" ";
    }
    
    
    return 0;
}