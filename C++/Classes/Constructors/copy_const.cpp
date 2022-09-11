#include<iostream>
using namespace std;

class Num{
    int a;
    public:
        Num(){
            a=0;
        }
        
        Num(int val){
            a=val;
        }

        Num( Num &obj){
            cout<<"This is Copy Constructor."<<endl;
            a=obj.a;
        }

        void show(){
            cout<<"The number is: "<<a<<endl;
        }
};

int main(){
    Num x,y,z(100),z2;
    x.show();
    y.show();
    z.show();
    //we now will make a replica of say object z.
    Num z1(z); //Value of z copied into z1.
    z1.show();

    z2 = z; //No copy constructor invoked as z2 object already created
    z2.show(); //so no constructor called for it.

    Num z3 = z; //Copy constructor invoked
    z3.show();  //Because object was created and initialised together.


    
    return 0;
}