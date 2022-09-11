#include<iostream>
using namespace std;

//Destructors:
/*1. Doesnot take any arguments nor return any value.
*/

int count = 0;
class Num{
    public:
        // Num(){}
        Num(){
            count ++ ;
            cout<<"Constructor call for object: "<<count<<endl;
        }
        ~Num(){
            cout<<"Destructor is called for object: "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"This is main function body"<<endl<<"Creating first object n1"<<endl;
    Num n1;
    {
        cout<<"A block is created"<<endl<<"Creating two more objects."<<endl;
        Num n2,n3;
        cout<<"Exiting the block"<<endl;
        //on exiting the block, the things inside it gets destroyed.
    }
    cout<<"Back to main body function."<<endl;

    
    return 0;
}