// To print binary format of a number and check SET/UNSET BIT.
#include<iostream>
using namespace std;

//Func to print Binary Form
void printBinary(int n){
    for(int i=n;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main(){
    int num,bit;
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<"Enter the BIT you want to check(starting from 0): ";
    cin>>bit;
    cout<<"The Binary form of number is: "<<endl;
    printBinary(num);
    cout<<"Checking for SET/UNSET BIT"<<endl;
    if(num & (1<<bit)!=0){
        cout<<"SET BIT"<<endl;
    }
    else{
        cout<<"UNSET BIT"<<endl;
    }
    
    //bit SET
    // printBinary(num|(1<<1));

    //bit UNSET
    // printBinary(num & (~(1<<3)));

    //toggle bit
    // printBinary(num^(1<<2));

    //counting SET BIT
    int cnt = 0;
    for(int j=31;j>=0;--j){
        if((num & (1<<bit))!=0){
            cnt++;
        }
    }
    cout<<"Count of Set Bit = "<<cnt<<endl;
    cout<<"Count of Set Bit = "<<__builtin_popcount(num)<<endl;

    return 0;
}