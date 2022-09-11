// Two base class to derive one inherited class.
// A,B --> C.
/**
Syntax:
class Derived : visibility base1, visibilty base 2{
    Class Body
};
*/
#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void get_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void get_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1 , public Base2
{
    public:
        void show()
        {
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The sum of Base1 and Base2 is "<<base1int + base2int<<endl;
        }
};

/*
The inherited derived will look like this:
Data Members:
    base1int --> protected
    base2int --> protected
Member functio:
    get_base1int() -->public
    get_base2int() -->public
    show()         -->public
*/

int main()
{
    Derived der;
    der.get_base1int(23);
    der.get_base2int(44);
    der.show();
    return 0;
}