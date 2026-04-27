/*
Danah Stallings
April 26, 2026
Homework 9, Arrays application 
*/
#include<iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

// Function 1: Array Size
int arraysize(){
    int size;

    do {
        cout<<"Enter an array size between 1 and 100: ";
        cin>>size;

        if(size<1 || size > 100){
            cout<<"Invalid input. Try again."<<endl;
        }

    } while(size<1 || size>100);

    return size;
}

// Function 2: Random Numbers
void randPopulate(int arr[], int size){
    for(int n = 0; n<size; n++){
        arr[n] = rand() % 21 + 10;
    }
}

// Function 3: Print the Values
void print(int arr[], int size){
    for (int n = 0; n<size; n++){
        cout<<arr[n]<<" ";
    }
    cout<<endl;
}

// Function 4:Reverse the Values
void reverse(int arr[], int size){
    for(int n = 0; n<size/2; n++){
        int temp = arr[n];
        arr[n] = arr[size - 1 - n];
        arr[size - 1 - n] = temp;
    }
}