#include<iostream>
using namespace std;

int main(){
    int numer,denom,result;
    cout<<"Enter numerator and deniminator: ";
    cin>>numer>>denom;

    //Exception will occur at this point at result.
    try{
        if(denom ==0)
        throw -1;
        result = numer/denom;
    }
    catch(int ex){
        cout<<"Division by 0 not defined"<<ex<<endl;
    }
    cout<<"Divsion result is: "<<result;
    return 0;
}