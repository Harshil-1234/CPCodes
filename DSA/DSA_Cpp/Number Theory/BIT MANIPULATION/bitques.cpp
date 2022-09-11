#include<iostream>
using namespace std;

void printBinary(int n){
    for(int i=n;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}

int main(){
    //CHECKING EVEN ODD
    // for(int i=0;i<8;i++){
    //     cout<<"Binary of i is: "<<" ";
    //     printBinary(i);
    //     if(i&1){
    //         cout<<i<<" is ODD"<<endl;
    //     }
    //     else{
    //         cout<<i<<" is EVEN"<<endl;
    //     }
    // }
    
    //CONVERTING UPPERCASE & LOWERCASE
    //UPPERCASE to LOWERCASE
    // char B = 'B';
    // char b = B | ' ';
    // cout<<b<<endl;

    //LOWERCASE to UPPERCASE
    char b = 'b';
    char B = b & '_';
    cout<<B<<endl;
    return 0;
}