/*
Danah Stallings
April 19, 2026
Lab 17, Passing array in a function
*/
#include<iostream>

using namespace std;

#include "lab17_functions_stallings.cpp"

int main(){
    cout<<"\n----- Passing array in a function -----"<<endl;
    int arr[] = {3, -1, 4, -5, 6, 7, -2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int evensum = sumevennumbers(arr, size);
    int negativecount = countnegativenumbers(arr, size);

    cout<<"The sum of even numbers: " <<evensum<<endl;
    cout<<"The count of negative numbers: " <<negativecount<<endl;

    return 0;
}