//Constructor Overloading.
// #include<iostream>
// using namespace std;

// class Complex{
//     int x,y;
//     public:
//         Complex(int a, int b){
//             x = a;
//             y = b;
//         }
//         Complex(int a){   //--->Overloading
//             x=a;
//             y=0;
//         }
//             void print(void){
//             cout<<"Your complex number is: "<<x<<" + "<<y<<"i"<<endl;
//         }
// };

// int main(){
//     Complex c1(1,1);
//     c1.print();
//     Complex c2(1);
//     c2.print();
    
//     return 0;
// }

//Constructor with default arguments.
#include<iostream>
using namespace std;

class Simple{
    int data1,data2;
    public:
        Simple(int a, int b = 9){
            data1=a;
            data2=b;
        }
          void print(void){
            cout<<"Your values are: "<<data1<<" and "<<data2<<endl;
        }
};

int main(){
    Simple s(1,1);
    s.print();
    Simple s1(1);
    s1.print();
    
    return 0;
}