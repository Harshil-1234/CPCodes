#include<iostream>
using namespace std;

/*
Case 1:
class B : public A{
    first A() then B() [order of constructor execution.]
};

Case 2:
class A : public B , public C{
     B() then C() then A() [order of constructor execution.]
};

Case 3:
class A : public B, virtual public C{
     C() then B() then A() [order of constructor execution.]
};
*/

class Base1{
    int data1;
    public:
        Base1(int i1){
            data1=i1;
            cout<<"Base 1 class Constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data in Base 1 is: "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i2){
            data2=i2;
            cout<<"Base 2 class Constructor called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data in Base 1 is: "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived Class Constructor is called."<<endl;
        }
        void printDataderived(void){
            cout<<"The value of drived1 is: "<<derived1<<endl;
            cout<<"The value of derived2 is: "<<derived2<<endl;
        }

};
int main(){
    // Derived harshil = Derived(1,2,3,4); Explicit Declaration
    Derived harshil(1, 2, 3, 4);
    harshil.printDataBase1();
    harshil.printDataBase2();
    harshil.printDataderived();
    
    return 0;
}