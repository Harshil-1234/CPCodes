#include<iostream>
using namespace std;

class Shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
        void initcounter(void) {counter = 0;}
        void setprice(void);
        void displayprice(void);
};

void Shop :: setprice(void){
    cout<<"Enter the Id of Item no. "<<counter<<endl;
    cin>>itemID[counter];
    cout<<"Enter the Price of Item Rs. "<<endl;
    cin>>itemPrice[counter];
    counter++; 
}

void Shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with Id: "<<itemID[i]<<" is Rs. "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    
    return 0;
}