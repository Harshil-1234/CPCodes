// float funcAverage(T1 a,T2 b){
//     float avg= (a+b)/2.0;
//     return avg;
// }

// int main(){
//     float res = funcAverage(11.111,22.222);
//     cout<<res<<endl; 
//     return 0;
// }


// #include<iostream>
// using namespace std;

// template <class T>

// void swapp(T &x, T &y){
//     T temp = x;
//     x = y;
//     y  =temp;
    
// }


// int main(){
//     int a=10,b=12;
//     swapp(a,b);
//     cout<<"Swapped numbers are: "<<a<<" "<<b<<endl;
    

//     return 0;
// }

//                  ========== OVERLOADING TEMPLATE FUNCTION ============

#include<iostream>
using namespace std;

template <class T>
class Harshil{
    public: 
        T data;
        Harshil(T a){
            data = a;
        }
        void display();
};

template <class T>
void Harshil<T> :: display(){
    cout<<"The value of data is: "<<data<<endl;
}

void func(int a){
    cout<<"I am func() "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"I am templatized func() "<<a<<endl;
}

int main(){
    // Harshil <int>h1(5);
    // h1.display();
    // Harshil <string>h2("Hahahaha");
    // h2.display();
    // Harshil <double>h3(12.22);
    // h3.display();

    //func(4); // Exact match takes higher priority
    func1(4);
    
    return 0;
}