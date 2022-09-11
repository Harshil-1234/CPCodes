#include<bits/stdc++.h>
using namespace std;

template<class T>
class F{
    public:
        static int x;
        F(){
            x+=1;
        }

};
template<class T>
int F<T>:: x=0;


int main(){
    F<int> a,b;
    F<double> c;
    cout<<a.x<<b.x<<c.x;
    
    return 0;
}