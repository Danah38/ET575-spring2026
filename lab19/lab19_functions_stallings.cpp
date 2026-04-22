/*
Danah Stallings
April 22, 2026
lab 19: 2D Array 
*/


#include<iostream>
using namespace std;

// Example 1: Function to print the elements in a 2D array
void print2d(int arr[][COLSIZE], int rowsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// Example 2: Function to sum all even positive numbers in a 2D array
int sumevenpositive(int arr[][COLSIZE], int rowsize){
    int sumallevenpositive = 0;
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            cout<<arr[row][col]<<"\t";
            sumallevenpositive += arr[row][col];
        }
        cout<<endl;
    }
    return sumallevenpositive;
}

void printsum(int sumallevenpositive){
    cout<<"The result is"<<sumallevenpositive<<endl;
}

// Lab Assignment: 2D Array
void print2d(int arr[][COLSIZE], int rowsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

double average(int arr[][COLSIZE], int rowsize){
    int sum = 0;
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            sum += arr[row][col];
        }
        int totalelement = row * col;
    }
    return doublesum / totalelement;
}