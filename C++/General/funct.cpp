#include<iostream>
using namespace std;

int maxi(int a, int b, int c, int d){
    int z;
    if((a>b) && (a>c) && (a>d)){
        z= a;
    }
    else if((b>a) && (b>c) && (b>d) ){
        z= b;
    }
    else if((c>a) && (c>b) && (c>d)){
        z= c;
    }
    else{
        z= d;
    }
    return z;
}

int main(){
    int a,b,c,d;
    // int a1,b1,c1,d1;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    // cin>>a>>b>>c>>d;
    cout<<maxi(a,b,c,d);
    return 0;
}