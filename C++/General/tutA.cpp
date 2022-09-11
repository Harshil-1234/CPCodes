/*#include<iostream>                            Basic Cpp Program
int main()
{
    std::cout<<"Hello World";
    return 0;
}*/

/*#include<iostream>                           Alternate way to write Cpp program
using namespace std;
int main()
{
    cout<<"Hello world";
    return 0;

}*/

/*#include<iostream>                            Introducing variables
using namespace std;

int main(){
    int a=4,b=6;
    cout<<"Value of a is "<<a<<" \nValue of b is "<<b;
    return 0;
}*/

// # include <iostream>                        //Basic I/O command Cpp

// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     c=a*b;
//     cout<<c;
//     return 0;


// } 

// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     for ( i = 0; i < 6; i++)
//     {   if(i==2){
//             // break;
//             continue;
//         }
//         cout<<i<<endl;


//     }
    
//     return 0;
// }    

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}