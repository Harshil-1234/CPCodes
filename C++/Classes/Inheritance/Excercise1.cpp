#include<bits/stdc++.h>
using namespace std;

//Class 1: Simple Calculator
class Simple_Calculator{
    protected:
        int num1, num2;
    public:
        void getsim(){
            cout<<"Enter the first number: ";
            cin>>num1;
            cout<<"Enter the second number: ";
            cin>>num2;
        }
        void simple_calc(){
            int choice;
            cout<<endl<<"Simple Calculator has following operations:"<<endl
            <<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl
            <<"4.Division"<<endl<<"Enter your choice: ";
            cin>>choice;
            switch (choice)
            {
            case (1):
                cout<<"The addition of two numbers entered is: "<<num1 + num2<<endl;
                break;
            case (2):
                cout<<"The difference of two numbers entered is: "<<num1 - num2<<endl;
                break;
            case (3):
                cout<<"The product of two numbers entered is: "<<num1 * num2<<endl;
                break;
            case (4):
                cout<<"The division of two numbers entered is: "<<num1 / num2<<endl;
                break;

            default:
                cout<<"Invalid Input";
                break;
            }

        }
};

//Class 2: Scientific Calculator
class Scientific_Calculator{
    protected:
        int numb1;
    public:
        void getsci(){
            cout<<"Enter the number: ";
            cin>>numb1;
        }
        void scien_calc(){
            int choice;
            cout<<endl<<"Scientific Calculator has following operations:"<<endl
            <<"1.Sqaure"<<endl<<"2.Exponential"<<endl<<"3.Logrithm"<<endl
            <<"4.Absolute Value"<<endl<<"Enter your choice: ";
            cin>>choice;
            switch (choice)
            {
            case (1):
                cout<<"The squre of the number entered is: "<<pow(numb1,2)<<endl;
                break;
            case (2):
                int a;
                cout<<"Enter the exponential power: ";
                cin>>a;
                cout<<"The eponent of the number entered is: "<<pow(numb1,a)<<endl;
                break;
            case (3):
                cout<<"The logrithm of the number entered is: "<<log(numb1)<<endl;
                break;
            case (4):
                cout<<"The absolute value of the number entered is: "<<abs(numb1)<<endl;
                break;

            default:
                cout<<"Invalid Input";
                break;
            }

        }

};

//Class 3: Hybrid Calulator
class Hybrid_Calulator : public Simple_Calculator, public Scientific_Calculator
{
    public:
        void hybd(){
            int choice;
            cout<<"             Welcome to the Calculator."<<endl
            <<"Which mode do you want to use?"<<endl<<"Enter 1 for Simple Calculator."
            <<endl<<"Enter 2 for Scientific Calculator"<<endl;
            cin>>choice;
            if(choice==1){
                getsim();
                simple_calc();
            }
            else if(choice ==2){
                getsci();
                scien_calc();
            }
            else{
                cout<<"Invalid Input.";
            }

        }
};


int main(){
    Hybrid_Calulator h1;
    h1.hybd();
    
    return 0;
}