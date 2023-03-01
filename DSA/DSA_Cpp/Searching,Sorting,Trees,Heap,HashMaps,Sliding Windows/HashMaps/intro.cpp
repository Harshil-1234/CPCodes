#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int>m;

    //insertion
    // Way-1:
    pair<string,int>p = make_pair("harshil",3);
    m.insert(p);

    // Way - 2
    pair<string,int>p2("naam",1);
    m.insert(p2);

    // Way - 3
    m["mera"] = 2;

    //searching
    cout<<m["naam"]<<endl;
    cout<<m.at("harshil")<<endl;

    // cout<<m.at("ha")<<endl; //-> this lines gives exception error and terminates the program and exits
    cout<<m["ha"]<<endl;       //-> this line gives output 0 as "ha" key not present, because new 
                                    //entry will be made for "ha" key with value 0
    cout<<m.at("ha")<<endl;

    //size
    cout<<m.size()<<endl;

    //to check presence of a key
    cout<<m.count("bro")<<endl;  // no such key present -> count = 0;
    cout<<m.count("harshil")<<endl;  // key present -> count = 1;

    //erase function
    m.erase("naam");
    cout<<m.size()<<endl;

    //traversing
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //using iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}