#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
      
};

class Base2
{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
      
};

class Derived : public Base1 , public Base2
{
    int a;
    public: 
        void greet(){
            //Base1 :: greet(); //when greet function in Derived will be called
                                // it will be of Base 1.
            Base2 :: greet(); //when greet function in Derived will be called
                                // it will be of Base 1.
        }

};

class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class D : public B{
    int a;
    // public:
    //     void say(){
    //         cout<<"Hello peeps"<<endl;
    //     }
};

int main()
{      //Ambiguity of TYPE 1:  
//     Base1 base1obj;
//     Base2 base2obj;
//     base1obj.greet();
//     base2obj.greet();
//     Derived der;
//     der.greet();
        B b;
        b.say();
        D d;
        d.say();
    
    
    return 0;
}