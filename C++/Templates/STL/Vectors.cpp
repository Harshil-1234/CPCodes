#include<iostream>
#include<vector>

using namespace std;

template <class T>

void display(vector <T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" "; //Which element where.
    }
    cout<<endl;
    
}
int main(){
    //WAYS to create a Vector:
    vector <int> v1; //ZERO LENGTH integer Vector.
    int element,size=5;

    //Working with ZERO LENGTH Vector.

    //Code to input elements in ZERO LENGTH VECTOR

    // cout<<"Enter the vector size: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to the vector: ";
    //     cin>>element;
    //     v1.push_back(element);
    // }

    // v1.pop_back(); //DELETES the LAST ELEMENT from the vector.
    // display(v1);

    //Creating an iterator:
    //The below iterator points at the beginning of the vector.
    // vector<int> :: iterator iter = v1.begin();

    // Insert function inserts an element at desired position using iteration
    //arithematic

    // v1.insert(iter, 100); //Inserts at the beginning.
    // v1.insert(iter+1, 100); //Inserts at index 1(beginning + 1).
    // v1.insert(iter,5, 100); //Inserts 5 copy at the beginning.
    // display(v1);


    vector <char> v2(4); //4 LENGTH character Vector.
    vector <char> v3(v2); //4 LENGTH character Vector from vector 2.
    vector <int> v4(6,3); //6 LENGTH character Vector having 3 as element.

    display(v4);

    

    
    
    return 0;
}