//SIMPLE EXAMPLE.
// #include<iostream>
// using namespace std;

// class Y;

// class X{
//     int num;
//     public:
//         void setVal(int val){
//             num=val;
//         }
//     friend void add (X,Y);
// };

// class Y{
//     int data;
//     public:
//         void setVal(int val){
//             data=val;
//         }
//     friend void add (X,Y);
// };

// void add(X o1, Y o2){
//     cout<<"Sum of X and Y is "<<(o1.num + o2.data)<<endl;
// }

// int main(){
//     X a;
//     Y b;
//     a.setVal(3);
//     b.setVal(14);
//     add(a,b);
//     return 0;
// }

//COMPLEX EXAMPLE.

#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    friend void swap (c1 &, c2 &);

    public:
        void indata(int a){
            val1=a;
        }
        void display(void){
            cout<< val1<<endl;
        }
};

class c2{
    int val2;
    friend void swap (c1 &, c2 &);

    public:
        void indata(int a){
            val2=a;
        }
        void display(void){
            cout<< val2<<endl;
        }
};

void swap(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    c1 o1;
    c2 o2;
    o1.indata(22);
    o2.indata(44);
    cout<<"The value of o1 before swapping"<<endl;
    o1.display();
    cout<<endl<<"The value of o2 before swapping"<<endl;
    o2.display();

    swap(o1,o2);
    cout<<"The value of o1 after swapping"<<endl;
    o1.display();
    cout<<endl<<"The value of o2 after swapping"<<endl;
    o2.display();

    
    return 0;
}