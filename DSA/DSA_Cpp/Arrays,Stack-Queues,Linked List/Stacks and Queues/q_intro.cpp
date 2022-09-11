#include<bits/stdc++.h>
using namespace std;

int main(){
    // queue<int>q;
    // q.push(11);
    // q.push(12);
    // q.push(15);

    // cout<<"Size of queue is: "<<q.size()<<endl;

    deque<int>d;
    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    return 0;
}