#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, int b){
            id =a;
            price =b;
        }
        void getData(){
            cout<<"Id of the item is: "<<id<<endl;
            cout<<"Price of the item is: "<<price<<endl;
        }
};


int main(){
    int size =3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr; //Created to make value of ptr constant after
    //execution of the loop.
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and Price of item "<<i+1<<" ";
        cin>>p>>q;
        ptr -> setData(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"For Item "<<i+1<<endl;
        ptrTemp -> getData();
        ptrTemp++;
    }
    
    return 0;
}