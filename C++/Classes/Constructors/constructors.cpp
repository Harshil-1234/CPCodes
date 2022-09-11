// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     // Creating a constructor.
//     // Constructor is a special member function with same name as of the class.
//     // It is used to initialise the objects of the class.
//     //It is automatically invoked whenever an object is created.
//     Complex(void); //constructor declaration.

//     void print(void){
//             cout<<"Your complex number is: "<<a<<" +"<<b<<"i"<<endl;
//         }
// };

// Complex :: Complex(void){   //---> This is a DEFAULT CONSTRUCTOR.
//     a=10;
//     b=0;
// }

// int main()
// {
//     Complex c;
//     c.print();

//     return 0;
// }

//Making a PARAMETERIZED CONSTRUCTOR.

// #include<iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int , int); //constructor declaration.

//     void print(void){
//             cout<<"Your complex number is: "<<a<<" +"<<b<<"i"<<endl;
//         }
// };

// Complex :: Complex(int x, int y){   //---> This is a PARAMETERIZED CONSTRUCTOR.
//     a=x;
//     b=y;
// }

// int main()
// {
//     //Two methods to pass x,y.
//     //1. IMPLICIT CALL
//     Complex c(4,6);
//     c.print();

//     //2. EXPLICIT CALL. 
//     Complex d = Complex(7,8);
//     d.print();

//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
    friend int distance (Point, Point);
    public:
        Point(int a, int b){
            x=a;
            y=b;
        }
        void display(void){
            cout<<"The coordinates (x,y) are ("<<x<<","<<y<<")"<<endl;
        }
};

//function to find distance between to points.

int distance(Point p1, Point p2){
    float d1= pow((p1.x-p2.x),2);
    float d2= pow((p1.y-p2.y),2);
    return sqrt(d1+d2);

}

int main(){ 
    Point p1(1, 0);
    p1.display();

    Point p2(70, 0);
    p2.display();

    float result = distance(p1,p2);

    cout<<"The distance between 2 points is: "<<result;

    
    return 0;
}