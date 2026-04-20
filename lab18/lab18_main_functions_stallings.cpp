/*
Danah Stallings
April 20, 2026
lab 18: Array application
*/

#include<iostream>
#include "lab18_functions_stallings.cpp"

using namespace std;

int main(){
    cout<<"\n----- Example 1: Search Function -----"<<endl;
    // declare the array size
    const int ARRAYSIZE = 5;
    // declare the array
    int a[ARRAYSIZE];
    // declare the variable to save the array size if there are less the five consecutive positive numbers
    int listsize;
    // declare the variable to save the target numbers
    int searchnumber = 20;

    // call functions fillarray
    fillarray(a,listsize,ARRAYSIZE);
    // testing listsize
    cout<<listsize<<endl;

    // call function 2
    printelement(a,listsize);

    // call function 3
    int foundindex = search(a,listsize,searchnumber);
    cout<<"Test search index "<<foundindex<<endl;

    // Exercise 
    
    return 0;
}