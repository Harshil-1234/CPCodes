#include<iostream>

//Header file to include classes for FILE I/O
#include<fstream>

/*
The useful CLASSES to work with FILES in C++ are:
1. fstreambase  --> BASE CLASS
2. ifstream     --> DERIVED CLASS from fstreambase
3. ofstream     --> DERIVED CLASS from fstreambase
*/

/*
In order to work with files in C++ you have to open the file.
There are primarily 2 ways to open it:
1. Using a Constructor.
2. Using member function [open()] of the class.
 */
using namespace std;

int main(){
    string st = "Harshil";
    string st2;
    // Opening FILE using CONSTRUCTOR and WRITING in it..

    //Writing Operation: Following command allows us to write in the FILE.
    // ofstream out("sample.txt"); // Created an OBJECT "out" of CLASS ofstream.

    // out<<st;

    // Opening FILE using CONSTRUCTOR and READING from it..

    //Reading Operation: Following command allows us to READ from the FILE.
    ifstream in("sample.txt"); // Created an OBJECT "in" of CLASS ifstream.

    // in>>st2;
    // cout<<st2; //Using this got only first word of the line as object of
               // class ifstream cannot read spaces and new line.

    //To get the whole line:
    getline(in , st2);
    cout<<st2;


    
    return 0;
}