#include<iostream>
using namespace std;

class Complex{
    private:
        int real,img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int r, int i){
            real = r;
            img = i;
        }
        void display(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        //Operator overloading syntax
        Complex operator +(Complex c){
            Complex temp;
            temp.real = real+c.real;
            temp.img = img+c.img;
            return temp;
        }
};

int main(){
    Complex c1(3,4);
    Complex c2(2,6);
    Complex c3(1,1);
    Complex c4;
    // c3=c1+c2; //This will throw an error as '+' doesn't know about c1,c2 datatypes
    //We can overload '+' to tell it what to do with c1 and c2

    // c3=c1+c2; // c3 = c1.add(c2)
    // c3.display();
    c4 = c1+c2+c3;
    c4.display();
    return 0;
}