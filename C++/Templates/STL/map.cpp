// KEY-VALUE PAIR.
//Map is an associative array.

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, int> marksMap;

    marksMap["Harshil"] = 99;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    marksMap["Sharma Ji ka Ladka"] = 0;

    //Inserts in alphabetic order.
    marksMap.insert({{"Jojo",99},{"Naruto",59}});

    map<string, int> :: iterator iter;

    for (iter = marksMap.begin(); iter!= marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max_size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty return val is: "<<marksMap.empty()<<endl;
    
    
    return 0;
}