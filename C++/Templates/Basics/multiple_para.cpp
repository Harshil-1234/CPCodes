/* 
----------- FOR MULTIPLE PARAMETER TEMPLATE ----------------
template <class T1, class T2>

class <name of class>{
    // Body Code;
};
 */
#include<iostream>
using namespace std;

template <class T1, class T2>

class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<< data1<<" "<< data2<<endl;
        }
};

int main(){
    myClass <int , char>obj(1,'c');
    obj.display();

    myClass <int , char>obj1(1,1);
    obj1.display();
    
    return 0;
}