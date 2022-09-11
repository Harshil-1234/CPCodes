// BI-DIRECTIONAL LINEAR LIST which shows insertion and deletion 
// operation efficiently.
// Used when we want middle Insertion/Deletion at a faster rate.

#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it!= lst.end(); it++)    
    {
        cout<< *it<<" ";
    }
    cout<<endl;

}

int main(){
    list<int> list1; //list of 0 length.
    // list<int> list2(7); //Empty list of size 7.
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    //Removing Functions:
    // list1.pop_back();  //Removes last element
    // list1.pop_front(); //Removes first element

    //Remove all occurences of elemnts, say 2 9s in the list...removes both.
    // list1.remove(9); //Remove specified value element.
    // display(list1);

    //Sorting list:
    // list1.sort();
    // display(list1);

    //Reversing list:
    list1.reverse();
    display(list1);

    list<int> list2(3);
    list<int> :: iterator it2; 
    it2 = list2.begin();

    *it2 = 45;
    it2++;
    *it2 = 9;
    it2++;
    *it2 = 12;
    it2++;
    display(list2);

    //Merging list1 and list2:
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"List 1 after merging: ";
    // display(list1);

    //Swapping lists:
    list1.swap(list2);
    cout<<"After swapping list1 is: ";
    display(list1);
    display(list2);

    
    



    
    return 0;
}