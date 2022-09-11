// *************USING LOOPS TO DO MULTIPLICATION**********
// #include<iostream>
// using namespace std;
// int main(){
    // int i;                                           //******FOR LOOP******
//     for(i=1;i<=10;i++)
//     {
//         cout<<i*6<<endl;

//     }
//     return 0;}

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;                                          //******WHILE LOOP******
//     while(i<=10)
//     {
//         cout<<i*6<<endl;
//         i++;
//     }
//     return 0;}

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;                                          //******do-WHILE LOOP******
//     do
//     {
//         cout<<"6x"<<i<<"="<<i*6<<endl;
//         i++;
//     }while(i<=10);
//     return 0;}


// *******************HACKERRANK QUESTION*************

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    string num[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a;
    cin>>b;
    
    for(int n=a;n<=b;n++){
        if(n<=9){
            cout<<num[n-1]<<endl;

        }
        else if(n>9){
            if(n%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }

    return 0;
}


