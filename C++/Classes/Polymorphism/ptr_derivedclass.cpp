// POINTERS to DERIVED CLASS
#include <iostream>
using namespace std;

class Baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "Value of base object is: " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "Value of base object is: " << var_base << endl;
        cout << "Value of derived object is: " << var_derived << endl;
    }
};

int main()
{
    Baseclass *base_class_ptr;
    Derivedclass obj_derived;
    Baseclass obj_base;
    base_class_ptr = &obj_derived; // pointing base class pointer 
                                   //to  derived class
    base_class_ptr ->var_base = 34;
    // base_class_ptr ->var_derived = 34; //Will throw an error.
    base_class_ptr ->display();

    Derivedclass * derived_class_ptr;
    derived_class_ptr = &obj_derived;
    derived_class_ptr ->var_derived=100;
    derived_class_ptr ->var_base=90;
    derived_class_ptr ->display();
    return 0;
}