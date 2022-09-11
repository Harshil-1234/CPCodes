#include<iostream>
using namespace std;

class Base{
    //a variable is private but yet can be inherited by using protected mode.
    protected:
        int a;
    private:
        int b;
};

/*	                        Public Derivation      	Private Derivation    	Protected Derivation
1.Private members           Not Inherited               Not Inherited         Not Inherited              
2.Protected members           Protected                 Private               Protected                    
3.Public members           	  Public	                Private               Protected  
*/

class Derived : protected Base{

};
int main(){
    Derived d;
    Base b;
    // cout<<d.a; //Will not work as a is protected in both base and derived class.
    
    return 0;
}