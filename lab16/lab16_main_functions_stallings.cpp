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

    cout<<"\n----- Example 4: Length of an Array -----"<<endl;
    lenghtarray();

    cout<<"\n----- Example 5: Loop through an Array -----"<<endl;
    looparray();

    cout<<"\n----- Example 6: Pass an Array to a function -----"<<endl;
    // Declare an array
    const int s = 3;
    int numbers[s];

    // Fill up the array with data
    fillup(s,numbers);

    // Print the values in an array
    printarray(s,numbers);

    // Print the max value
    int m = maxnumber(s,numbers);
    cout<<"the maximum number is "<<m<<endl;

    cout<<"\n----- Lab 16 Assignment -----"<<endl;
    printarray(5,scores);

    int maxnumber = minnumber(5,scores);
    cout<<"the lowest number is "<<lowest<<endl;

    return 0;
}