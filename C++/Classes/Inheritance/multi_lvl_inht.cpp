/*
A-->B-->C (inheritence path)
*/
#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_Roll_num(int);
        void get_Roll_num(void);
};

void Student :: set_Roll_num(int num){
    roll_number=num;
}
void Student :: get_Roll_num(){
    cout<<"The roll number is: "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths,physics;
    public:
        void setMarks(float,float);
        void getMarks(void);
};

void Exam :: setMarks(float m , float p){
    maths = m;
    physics = p;
}
void Exam :: getMarks(void){
    cout<<"Marks obtained in maths: "<<maths<<endl;
    cout<<"Marks obtained in physics: "<<physics<<endl;
}

//Multilevel Inheritence.
class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            get_Roll_num();
            getMarks();
            cout<<"Your percentage is: "<<(maths+physics)/2<<endl;
        }
};


int main(){
    /*
    NOTES:
        If we are inheriting B from A and C from B: A--> B --> C
        1. A is base class for B and B is base class for C.
        2. ABC [A--> B --> C] is called INHERITENCE PATH.
    */
    Result harshil;
    harshil.set_Roll_num(001);
    harshil.setMarks(94.5,97.00);
    harshil.display_result();
    return 0;
}