#include<iostream>
using namespace std;

class Baseclass
{
public:
    int var_base=100;
    virtual void display()
    {
        cout << "1. Value of base object is: " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived=200;
    void display()
    {
        cout << "2. Value of base object is: " << var_base << endl;
        cout << "2. Value of derived object is: " << var_derived << endl;
    }
};

int main(){
    Baseclass * base_class_ptr;
    Derivedclass * derived_class_ptr;
    Derivedclass obj_der;
    base_class_ptr = &obj_der;
    derived_class_ptr = &obj_der;
    base_class_ptr->display();
    derived_class_ptr->display();

    return 0;
}