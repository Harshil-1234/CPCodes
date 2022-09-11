//Monk and magical bag question: HACKEREARTH
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int turn;
//     cin>>turn;
//     while(turn--){
//         long long N , K; //N--> number of bag, K--> total time he has
//         multiset<long long> candies;
//         for (long long i = 0; i < N; i++)
//         {
//             long long A;
//             cin>>A;
//             candies.insert(A);
//         }
//         long long eaten = 0;
//         while(K--){
//             auto last_it = (--candies.end());
//             long long candy_ct = *(last_it);
//             eaten += candy_ct;
//             candies.erase(last_it);
//             candies.insert(candy_ct / 2);
//         }
//         cout<< eaten << endl;   
//     }
    
//     return 0;
// }

// ------------- SETS : Hackerrank ---------------
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int query; cin>>query;
//     set<long long> s;
//     while(query--){
//         long long y,x;
//         cin>>y>>x;
//         if(y==1){
//             s.insert(x);
//         }
//         else if(y==2){
//             auto it = s.find(x);
//             if(it==s.end()){
//                 continue;
//             }
//             else{
//                 s.erase(x);
//             }
//         }
//         else if(y==3){
//             auto it = s.find(x);
//             if(it !=s.end()){
//                 cout<<"Yes"<<endl;
//             }
//             else{
//                 cout<<"No"<<endl;
//             }
//         }
//     }
//     return 0;
// }   

// ------ MONK BIRTHDAY:Hackerearth -----------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    while(N--){
        set<string> list;
        int num;cin>>num;
        while(num--){
            string name;
            cin>>name;
            list.insert(name);
        }
        for(auto val : list){
            cout<< val<<endl;
        }
        cout<<endl;
    }
    return 0;
}