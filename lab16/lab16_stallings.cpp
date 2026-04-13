/*
Danah Stallings
lab 16, Pointers and Intro to array
April 13, 2026
*/
#include<iostream>

using namespace std;

#include "lab16_functions_stallings.cpp"

int main(){
    cout<<"\n----- Example 1: Pointer and reference -----"<<endl;
    pointerreference();

    cout<<"\n----- Example 2: Passing pointer and reference -----"<<endl;
    string something = "Hello World!";
    printvalue(something);
    printaddress(&something);
    printreference(something);

    cout<<"\n----- Example 3: Intro to Array -----"<<endl;
    introarray();

    return 0;
}