/*                  HEAP IMPLEMENTATION USING STL
    --> By default works on MAX HEAP ORDER
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int>pq;
    // pq.push(4);
    // pq.push(2);
    // pq.push(5);
    // pq.push(3);

    // cout<<"Top Element in priority queue "<<pq.top()<<endl;

    // pq.pop();
    // cout<<"Top Element in priority queue "<<pq.top()<<endl;

    // cout<<"Size of priority queue "<<pq.size()<<endl;

    // Creating a min heap
    priority_queue<int, vector<int>, greater<int> >minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    // cout<<"Top Element in min heap priority queue "<<minheap.top()<<endl;

    // minheap.pop();
    // cout<<"Top Element in min heap priority queue "<<minheap.top()<<endl;

    cout<<"Size of min heap priority queue "<<minheap.size()<<endl;

    while(minheap.size()){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
    cout<<endl;


    return 0;
}