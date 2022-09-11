// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     ofstream out;
//     out.open("sample.txt");
//     out<<"This is me";
//     out.close();

//     ifstream in;
//     string st;
//     in.open("sample.txt");  
//     // in>>st;
//     // getline(in, st);  
//     // cout<<st;

//     while(in.eof()==0){
//         getline(in , st);
//         cout<<st<<" ";
//     }
//     in.close();

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int x=10,a=-3;
    x+=a;
    cout<<x;
    return 0;
}