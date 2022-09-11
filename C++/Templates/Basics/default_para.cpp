#include<iostream>
using namespace std;

template <class T1=int, class T2=float>

class Harshil{
    public:
        T1 a;
        T2 b;
        Harshil(T1 x, T2 y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        }
};

int main(){
    Harshil <> h1(10,11.1);
    h1.display();

    
    return 0;
}