#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    q.push("abc"); //Frontmost element
    q.push("bcd");
    q.push("dfr");
    q.push("wer");
    q.push("asx");//Last element
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}