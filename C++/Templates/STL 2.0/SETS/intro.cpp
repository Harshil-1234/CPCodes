/*
--------------- ORDERED SET ----------------
Time Complexity: O(log(n))
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("ghi");
    s.insert("def");
    s.insert("jkl");
    s.insert("mnp");
    s.insert("abcd");
    s.insert("sdwefd");
    auto it = s.find("abc");
    if(it != s.end()){
        // cout<<*it<<endl;
        s.erase(it);
    }

    for(auto val : s){
        cout<<val<<endl;
    }

    return 0;
}