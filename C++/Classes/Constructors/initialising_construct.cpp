#include<iostream>
using namespace std;

/* 
SYNTAX:
constructor(argument list) : initialisiation list{
    //BODY of Constructor
} 

class Test{
    int a, b;
    public:
        Test(i,j) : a(i), b(j){
            Constructor Body
        }

};
 */

class Test{
    int a, b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(i*j)
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : b(j), a(i+b) Give garbade value as a is declared 
        // before b hence would be initialised first. 
        Test(int i, int j) : b(j), a(i+b) 
        {
            cout<<"Constructor Initialisation done."<<endl;
            cout<<"Value of a is: "<<a<<endl;
            cout<<"Value of b is: "<<b<<endl;
        }

};
int main(){
    Test t(2,3);
    
    return 0;
}