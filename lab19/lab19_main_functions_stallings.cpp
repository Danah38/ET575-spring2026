/*
Danah Stallings
April 22, 2026
lab 19: 2D Array 
*/
const int COLSIZE = 5;
#include<iostream>
using namespace std;
#include "lab19_functions_stallings.cpp"


int main(){
    cout<<"\n----- Example 1: 2D Array"<<endl;
    // Initialized a 2D array
    int rowsize = 4;
    int a[rowsize][COLSIZE] ={
        {4,8,-12},
        {1,-8,3,5,7},
        {-6,2,9}
    };

    //call the print function
    print2d(a, rowsize);

    cout<<"\n----- Example 2: Sum of all positive even numbers"<<endl;
    printsum(sumevenpositive(a,rowsize));

    cout<<"\n----- Lab Assignment: 2D Array"<<endl;
    int rowsize = 3;
    int a[rowsize][COLSIZE] ={
        {4,8,-12},
        {1,-8,3,5,7},
        {-6,2,9}
    };


    return 0;
}