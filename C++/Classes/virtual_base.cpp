#include<iostream>
using namespace std;

/*
student -->test [DONE]
student -->sports [DONE]
test    -->result [DONE]
sports  -->result [DONE]
 */

class Student{
    protected:
        int roll_num;
    public:
        void set_roll(int a){
            roll_num = a;
        }
        void print_roll(void){
            cout<<"Your Roll Number is: "<<roll_num<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths =m1;
            physics= m2;
        }
        void print_marks(void){
            cout<<"Your Result is:"<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
    
};
class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score =s;
        }
        void print_score(void){
            cout<<"Your Sports score is: "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    float total;
    public:
        void display(void){
            total = maths+physics+score;
            print_roll();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main()
{
    Result harshil;
    harshil.set_roll(001);
    harshil.set_marks(78.50,77.50);
    harshil.set_score(9);
    harshil.display();

    return 0;
}