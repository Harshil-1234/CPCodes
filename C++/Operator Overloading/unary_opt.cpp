#include<iostream>
using namespace std;

class Weight{
    private:
        int weight;
    public:
        Weight(){
            weight = 0;
        }
        Weight(int k){
            weight = k;
        }
        void print(){
            cout<<"Your weight is: "<<weight<<" kg"<<endl;
        }
        //Unary operators don't take any parameter and work on single operand.
        //Pre-Incerment Operator Overloading.
        // void operator ++(){
        //     ++weight;
        // }
        // //Post-Increment Operator
        // void operator ++(int){
        //     weight++;
        // }

        Weight operator ++(){
            Weight temp;                    
            temp.weight = ++weight;
            return temp; 
        }

};

int main(){
    // Weight w1;
    // // ++w1; // '++' operator doesn't know what to do for data type Weight.
    //          // it knows how to deal with int, float etc only.
    // w1.print();
    // ++w1;
    // w1.print();
    // w1++;
    // w1.print();

    Weight w1,w2;
    w1= ++w2;
    w1.print();
    
    return 0;
}