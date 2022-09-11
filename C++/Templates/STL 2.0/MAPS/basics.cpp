/*
-------------- ORDERED MAPS -----------------
Time Complexity : O(log(n))
*/

#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<<"Size: "<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int,string> m;
    //TIME COMPLEXITY OF INSERTION OF ELEMENTS: O(log(n))--> n: size of MAP
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"abc"});
    m.insert({8,"abc"});


    // map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    print(m);

    //Find function: takes in key value
    //             : returns an iterator pointing towards the value
    //TIME COMPLEXITY: O(log(n))
    // auto it = m.find(9);
    // if(it == m.end()){
    //     cout<<"No such value exists"<<endl;
    // }
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    //ERASE FUNCTION: takes key/iterator as input
    //              : deletes the specified value if present
    //TIME COMPLEXITY: O(log(n))
    // auto it = m.find(3);
    // m.erase(3);
    // print(m);
    
    return 0;
}