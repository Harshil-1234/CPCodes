#include<iostream>

using namespace std;

int main(){
    int x,y,z;
    int c=5;
    for(x=5;x>0;x--){
        for(y=1;y<x;y++)
        cout<<" ";
        for(z=c;z>0;z--)
        cout<<z;
        c--;
        cout<<endl;
    }
    return 0; 
}