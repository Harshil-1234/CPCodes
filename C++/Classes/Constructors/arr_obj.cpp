// #include<iostream>
// using namespace std;

// class Employee{
//     int id;
//     int salary;

//     public:
//         void setID(void){
//             salary=122;
//             cout<<"Enter ID of the employee ";
//             cin>>id;
//         }
//         void getID(void){
//             cout<<"The ID of the employee is "<<id<<endl;
//             cout<<"The Salary of the employee is "<<salary<<endl;
//         }
// };

// int main(){
//     Employee e[4];
//     for (int i = 0; i < 4; i++)
//     {
//     e[i].setID();
//     e[i].getID();
//     }
    
//     return 0;
// }

//Passing objects as arguments.

#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setData(int v1, int v2){
            a=v1;
            b=v2;
        }

        void setSum(complex o1 , complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void print(void){
            cout<<"Your complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    complex c1,c2,c3;

    c1.setData(1,2);
    c1.print();

    c2.setData(3,2);
    c2.print();
    
    c3.setSum(c1,c2); 
    c3.print();
    
    return 0;
}