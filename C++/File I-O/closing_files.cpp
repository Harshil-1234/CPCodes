#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //Connecting our file with hout stream.
    // ofstream hout("sample.txt");

    // //Creating a name variable entered by the user.
    // string name;
    // cout<<"Enter the string:";
    // cin>>name;

    // //Writing a string to the file.
    // hout<<name;

    // //Closing the file link created.
    // hout.close();

    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"The content present in the file is: "<<content;

    return 0;
}