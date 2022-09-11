// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,diff=0,t;
//     cin>>t;
//     while(t--){
//         cin>>a>>b;
//         diff+=21-a-b;
//         if(diff>=1 & diff<=10)
//             cout<<diff;
//         else
//             cout<<-1;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,t;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         if(n%10==0)
//             cout<<n/10<<endl;
//         else
//             cout<<(n/10)+1<<endl;


//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c,t,i;
//     cin>>t;
//     while(t--){
//         cin>>b>>c;
//         while(true){
//             a=1;
//             if((a*b)%c==0)
//                 cout<<a<<endl;
//                 break;
                
//             a++;
            
            
//         }
//         //cout<<a<<endl;
        
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// // Utility function to calculate GCD
// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
// // Function to return LCM of two numbers
// int lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
 
 
// // Driver Code
// int main()
// {   int t;cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         if(b%a==0)
//             cout << gcd(a, b)<<endl;
//         else
//             cout<< lcm(a,b)<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int b,c;
        cin>>b>>c;
       
        
        
            
                cout<<c/gcd(b,c)<<endl;
        
    }
	// your code goes here
	return 0;
}
