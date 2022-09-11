// Solving Factorial Problem using Recursion.
/*
Step-1: Write the base case.
*/
#include<iostream>
using namespace std;

int factorial(int n){
    //Base Case: 0!
    if(n==0){
        return 1;
    }

    // int smallprb = factorial(n-1);
    // int biggerprb = n * smallprb;

    return n * factorial(n-1);
}

int main(){
    int number;

    cin>>number;

    int answer = factorial(number);

    cout<<answer<<endl;
    
    return 0;
}