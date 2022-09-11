#include<iostream>
using namespace std;

//Base Class.
class Employee{

    public:
        int Id;
        float salary;
        Employee(){}
        Employee(int x, float y=34.0){
            Id=x;
            salary=y;
        }
};

//Derived Class Syntax
/*
class {{derived class name}} : {{visibility-mode}} {{base class name}}
{
    methods/members/etc....
};

1. Default visibilty mode = private.
2. Private mode: Public member of base class becomes private member of derived class.
3. Public mode: Public member of base class becomes Public member of derived class.
4. Private members of base class are never inherited.
*/

//Programmer class derived from Employee base class
class Prog : public Employee{
    public:
        int lang =9;
        Prog(int inpid){
            Id = inpid;
        }
        void show(){
            cout<<Id;
        }
};

int main(){
    Prog ss(1);
    ss.show();
    cout<<endl<<ss.lang;
    cout<<endl<<ss.Id;

    
    return 0;
}