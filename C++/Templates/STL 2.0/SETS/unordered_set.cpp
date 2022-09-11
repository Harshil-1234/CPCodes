/*
------------ Time Complexity ----------------
O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin>>S;
        s.insert(S);
    }
    int Q;
    cin>>Q;
    for (int i = 0; i < Q; i++)
    {
        string q;
        cin>>q;
        auto it  = s.find(q);
        if(it!=s.end()){
            cout<<"PRESENT"<<endl;
        }
        else{
            cout<<"NOT PRESENT"<<endl;
        }

    }
    
    

    return 0;
}