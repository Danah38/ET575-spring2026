/*
Danah Stallings
April 27, 2026
lab 20: Parsing and File handling
*/
#include <fstream>
#include<iostream>
#include <string>
#include "lab20_functions_stallings.cpp"

using namespace std;


int main(){
    cout<<"\n----- Example 1: Collect a Number -----"<<endl;
    int n = collectnum();
    cout<<"Collected number = "<<n<<endl;

    cout<<"\n----- Example 2: Reading a File -----"<<endl;
    readfile("samplefile.txt");

    cout<<"\n----- Example 3: Writing a File -----"<<endl;
    writefile("intro.txt");

    cout<<"\n----- Example 4: Append Data -----"<<endl;
    appendmsg("samplefile.txt", "student's name");

    cout<<"\n----- Lab Assignment: Files Handling -----"<<endl;
    string name;

    createfile();
    cout << "Enter your full name: ";

    getline(cin, name);

    appendfile(name);

    readfile("data_user.txt");

    return 0;
}