/*
Danah Stallings
April 27, 2026
lab 20: Parsing and File handling
*/

#include<fstream>
#include<iostream>

#include "lab20_functions_stallings.cpp"

using namespace std;


int main(){
    cout<<"\n----- Homework 10: File Handling -----"<<endl;
    int n = collectnum();
    cout<<"Collected number = "<<n<<endl;

    readfile("samplefile.txt");

    writefile("intro.txt");

    appendmsg("samplefile.txt", "student's name");

    checkfile("example1.txt");
    checkfile("samplefile.txt");

    return 0;
}