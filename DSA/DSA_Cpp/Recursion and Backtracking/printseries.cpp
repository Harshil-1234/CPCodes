//Printing number series using recursion:

#include<iostream>
using namespace std;

void print(int n){
    //Base Case:
    if(n==0){
        return;
    }

    //Updation:
    cout<<n<<" ";

    //Recursive relation
    print(n-1);
}

int main(){
    int num;
    cin>>num;
    cout<<endl;
    print(num);    
    return 0;
}