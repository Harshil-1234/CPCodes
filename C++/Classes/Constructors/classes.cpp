// In Class a member is by default PRIVATE. 
// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

//A simple code for CLASSES.

// #include<iostream>
// using namespace std;

// class Employee{
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//         void setData(int a, int b , int c);
//         void getData(){
//             cout<<"Value of a "<<a<<endl;
//             cout<<"Value of b "<<b<<endl;
//             cout<<"Value of c "<<c<<endl;
//             cout<<"Value of d "<<d<<endl;
//             cout<<"Value of e "<<e<<endl;
//         }


// };

// void Employee :: setData(int a1,int b1,int c1){
//     a=a1;
//     b=b1;
//     c=c1;

// }

// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     Employee harshil;
//     harshil.setData(x,y,z);
//     harshil.d=100;
//     harshil.e=200;
//     harshil.getData();
//     return 0;
// }

//Nesting members.

// #include<iostream>
// #include<string>
// using namespace std;

// class binary{
//     string s;
//     void chk_bin(void);
//     public:
//         void read(void);
//         void ones_complement(void);
//         void display(void);
// };

// // used :: operator to denote the read() function of class binary.
// void binary :: read(void){
//     cout<<"Enter a binary number:"<<endl;
//     cin>>s;
// }

// void binary :: chk_bin(void){ 
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s.at(i)!='0' && s.at(i)!='1'){
//             cout<<"Number is not binary."<<endl;
//             exit(0);
//         }
//         // else{
//         //     cout<<"Number is Binary.";
//         // }

//     }
    
// }

// void binary :: ones_complement(void){
//     chk_bin();                         // Nesting of member functions.
//     for (int i = 0; i < s.length(); i++){
//         if(s.at(i)=='0'){
//             s.at(i)='1';
            
//         }
//         else{
//             s.at(i)='0';
            
//         }
//     }

// }

// void binary :: display(void){
//     cout<<"Displaying your Binary number"<<endl;
//     for (int i = 0; i < s.length(); i++){
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }

// int main(){
//     binary b;
//     b.read();
//     //b.chk_bin();      // Can't use here as function dclared private.
//     b.display();
//     b.ones_complement();
//     b.display();
    
//     return 0;
// }