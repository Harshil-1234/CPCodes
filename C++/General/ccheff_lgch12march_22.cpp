// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         char s[100],h[100];
//         cin>>s;
//         cin>>h; 

//         for(int i=0;i<5;i++){
//             if (s[i]==h[i])
//             cout<<'g';
//             else
//             cout<<'b';

//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int c=0;
        long int  n; cin>>n;
        for(int i=1;i<=n;i++){
            if (i%6==0)
            c++;
        }
        cout<<c<<endl;

    }
    return 0;
}