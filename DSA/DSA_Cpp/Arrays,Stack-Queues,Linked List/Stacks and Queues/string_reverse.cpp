#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    string a = "harshil";
    for(int i=0;i<a.size();i++){
        char ch = a[i];
        s.push(ch);
    }

    string ans;

    while(!(s.empty())){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"Original string is: "<<a<<endl;
    cout<<"Reversed string is: "<<ans<<endl;
    return 0;
}