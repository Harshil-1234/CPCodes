#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the employee id ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The employee id is "<<id<<endl;
        }

        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }
}harshil;

//Here count is a static data member.
// int Employee :: count = 100; to initialise count as 100.
int Employee :: count;

int main(){
    harshil.setData();
    harshil.getData();
    Employee :: getCount();

    
    return 0;
}