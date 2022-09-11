//To get bit at any position in a number
// #include<iostream>
// using namespace std;

// int getbit(int n, int pos){
//     return (n & (1<<pos))!=0;
// }

// int main(){
//     cout<<getbit(5,2);
    
//     return 0;
// } 

//To set bit at any given position.
// #include<iostream>
// using namespace std;

// int setbit(int n, int pos){
//     return (n | (1<<pos));
// }

// int main(){
//     cout<<setbit(5,1);
//     return 0;
// } 

//To clear bit at a position i.e. make it 0
// #include<iostream>
// using namespace std;

// int clearbit(int n, int pos){
//     return (n & (~(1<<pos)));
// }

// int main(){
//     cout<<clearbit(5,2);
//     return 0;
// } 

//To update at a position 
#include<iostream>
using namespace std;

int updatebit(int n, int pos, int val){
    int mask =~(1<<pos);
    n = n & mask;
    return n | (val<<pos) ;
}

int main(){
    cout<<updatebit(5,1,1);
    return 0;
} 