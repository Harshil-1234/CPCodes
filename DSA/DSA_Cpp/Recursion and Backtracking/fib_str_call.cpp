// Fibonacci Series
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int sub = fibonacci(n-1)+fibonacci(n-2);
//     return sub;
// }
// int main(){
//     int num;
//     cin>>num;
//     int ans = fibonacci(num);
//     cout<<"The "<<num<<" term of Fibonacci Series is: "<<ans;

//     return 0;
// }

// N stair problem
// #include<iostream>
// using namespace std;

// int count(int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     int ans = count(n-1)+count(n-2);
//     return ans;
// }

// int main(){
//     int stair;
//     cin>>stair;
//     int nstair = count(stair);
//     cout<<nstair;
//     return 0;
// }

//Speak the digit code
#include<iostream>
using namespace std;
void saydigit(int n, string *arr){
    //Base Case
    if(n==0){
        return;
    }
    // Process:
    int digit = n%10;
    n=n/10;

    //Recursive call:
    saydigit(n,arr);
    cout<<arr[digit]<<" ";

}

int main(){
    int num;
    cin>>num; //1-2
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigit(num,arr);
    cout<<endl;
    return 0;
}