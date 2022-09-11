/*
Single base class used to derive an inherited class.
*/
//Derived publically

// #include<iostream>
// using namespace std;

// class Base{
//     int data1; //private member by default hence not accessible.
//     public:
//         int data2;
//         void setData();
//         int getData1();
//         int getData2();
// };

// void Base :: setData(){
//     data1=10;data2=20;
// }

// int Base :: getData1(){
//     return data1;
// }
// int Base :: getData2(){
//     return data2;
// }

// //syntax of a derived class.
// class Derived : public Base{
//     int data3;
//     public:
//         void process();
//         void display();

// };

// void Derived :: process(){
//     data3 = data2 * getData1();
// }

// void Derived :: display(){
//     cout<<"Value of data 1 is: "<<getData1()<<endl;
//     cout<<"Value of data 2 is: "<<data2<<endl;
//     cout<<"Value of data 3 is: "<<data3<<endl;
// }

// int main(){
//     Derived der;
//     der.setData();
//     der.process();
//     der.display();
    
//     return 0;
// }

//Derived privately.

#include<iostream>
using namespace std;

class Base{
    int data1; //private member by default hence not accessible.
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(){
    data1=10;data2=20;
}

int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

//syntax of a derived class.
class Derived : private Base{
    int data3;
    public:
        void process();
        void display();

};
//process and display are public of Derived class which are not inherited from
//Base class. Thus they can be used in main function directly
//Moreover these functions can be used to call members inherited privately from
//the base class.

void Derived :: process(){
    setData();
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout<<"Value of data 1 is: "<<getData1()<<endl;
    cout<<"Value of data 2 is: "<<data2<<endl;
    cout<<"Value of data 3 is: "<<data3<<endl;
}

int main(){
    Derived der;
    der.process();
    der.display();
    
    return 0;
}