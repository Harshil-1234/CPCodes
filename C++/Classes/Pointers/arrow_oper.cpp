#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
        void getData(){
            cout<<"Your real part is: "<<real<<endl;
            cout<<"Your imaginary part is: "<<imaginary<<endl;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex; //Another way of creating an object.
    // (*ptr).setData(3,5); is exactly same as:

    ptr ->setData(3,5);
    // (*ptr).getData();
    ptr ->getData();

    //Array of objects:
    Complex *ptr1 = new Complex[4];
    ptr1 ->setData(4,8);
    ptr1 ->getData();
    return 0;
}