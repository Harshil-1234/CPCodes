// #include<iostream>
// using namespace std;

// int main(){
//     char a[1000];
//     cin>>a;
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=9,b=9;
//     a=b++;
//     cout<<a<<b<<endl;
//     b=a++;
//     cout<<a<<b<<endl;
//     b=++b;
//     cout<<a<<b<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int a , b=10;
    a= ++b + ++b;
    cout<<a<<b;
    return 0;
}