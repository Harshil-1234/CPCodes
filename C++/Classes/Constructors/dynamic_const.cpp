#include<iostream>
using namespace std;

class BankDepot{
    int principal, years;
    float interest, returnval;

    public:
        BankDepot(){}
        BankDepot(int p, int y, float r); //i can have value like 0.04
        BankDepot(int p, int y, int r); //i can have value like 4%
        void show();
};

BankDepot :: BankDepot(int p, int y, float r){
    principal = p;
    years = y; 
    interest = r;
    returnval = principal;
    for (int i = 0; i < y; i++)
    {
        returnval = returnval *(1+interest) ;
    }
    
}

BankDepot :: BankDepot(int p, int y, int r){
    principal = p;
    years = y; 
    interest = float(r)/100;
    returnval = principal;
    for (int i = 0; i < y; i++)
    {
        returnval = returnval *(1+interest) ;
    }
    
}

void BankDepot :: show(){
    cout<<endl<<"The principal amount was: "<<principal<<endl
    <<"Return value after "<<years<<" year is: "<<returnval;
}

int main(){
    BankDepot bd1,bd2,bd3;
    int p,y,R;
    float r;
    cout<<"Enter values of p,y,r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDepot(p,y,r);
    bd1.show();

    cout<<endl<<"Enter values of p,y,R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDepot(p,y,R);
    bd2.show();
    
    return 0;
}