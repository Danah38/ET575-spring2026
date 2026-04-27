/*
Danah Stallings
April 26, 2026
Homework 8, Finding a value in a 2D array 
*/
#include<iostream>

using namespace std;

#include "homework8_functions_stallings.cpp"

int main(){
    cout<<"\n----- 2D Array -----"<<endl;
    int ar[ROWCOLARRAY][ROWCOLARRAY] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int searchvalue;
    int location[2];

    cout << "Enter a number to search for: ";
    cin >> searchvalue;

    searchArray(ar, searchvalue, location);

    displaymessage(searchvalue, location);

    return 0;
}