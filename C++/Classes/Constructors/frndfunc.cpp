// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//         void setNum(int v1, int v2){
//             a=v1;
//             b=v2;
//         }

//         friend complex sumComplex(complex o1, complex o2);

//         void print(void){
//             cout<<"Your complex number is: "<<a<<" +"<<b<<"i"<<endl;
//         }
// };

// complex sumComplex(complex o1 , complex o2){
//     complex c3;
//     c3.setNum((o1.a+o2.a),(o1.b+o2.b));
//     return c3;
// }

// int main(){
//     complex c1,c2,sum;

//     c1.setNum(1,2);
//     c1.print();

//     c2.setNum(3,2);
//     c2.print();

//     sum=sumComplex(c1,c2);
//     sum.print();
    
//     return 0;
// }

#include<iostream>
using namespace std;

/*Errors faced and how they were resolved
1. Calculator was made after complex which gave compilation error as
compiler couldnot compile the friend statment in the complex.
So calculator declared earlier

2.Then the complex class had to be forward declared as to ensure compiler
with the presence of that class

3. Then the sumRealComp function had to be declared after complex class
in order to access its private members and had to be predefined in the
calculator class.
This is because complex class was yet to be declared thus we couldnot use
its member prior to its declaration*/

//Forward declaration of a class

class complex;

class Calculator{
    public:
        int add(int a , int b){
            return (a+b);
        }
        int sumRealComp(complex  , complex );
        int sumcompComp(complex  , complex );
        
};

class complex{
    int a,b;

    //declaring friend function.
    //Individual declaration of fuctions.
    // friend int Calculator :: sumRealComp(complex , complex );
    // friend int Calculator :: sumcompComp(complex , complex );

    //Declaring whole class as a friend which allows any function of
    //that class to access the private members of complex.
    friend class Calculator;

    public:
        void setNum(int v1, int v2){
            a=v1;
            b=v2;
        }

        void print(void){
            cout<<"Your complex number is: "<<a<<" +"<<b<<"i"<<endl;
        }
};

//Defining function belonging to class caclulator.
int Calculator :: sumRealComp(complex o1 , complex o2){
            return (o1.a+ o2.a);
        }

int Calculator :: sumcompComp(complex o1 , complex o2){
            return (o1.b+ o2.b);
        }

int main(){
    complex o1,o2;
    o1.setNum(3,4);
    o2.setNum(2,2);
    Calculator calc;
    int res1 = calc.sumRealComp(o1,o2);
    int res2 = calc.sumcompComp(o1,o2);
    cout<<"The sum of real part of complex number is: "<<res1<<endl;
    cout<<"The sum of imaginary part of complex number is: "<<res2<<"i"<<endl;
    
    return 0;
}