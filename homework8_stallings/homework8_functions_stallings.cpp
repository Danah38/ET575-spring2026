/*
Danah Stallings
April 26, 2026
Homework 8, Finding a value in a 2D array 
*/
#include<iostream>

using namespace std;

const int ROWCOLARRAY = 4;

// Function 1: Search for a value
void searchArray(int ar[ROWCOLARRAY][ROWCOLARRAY], int searchvalue, int location[2]){
    location[0] = -1;
    location[1] = -1;

    for(int row = 0; row<ROWCOLARRAY; row++){
        for(int col = 0; col<ROWCOLARRAY; col++){
            if (ar[row][col] == searchvalue){
                location[0] = row;
                location[1] = col;
                return;
            }
        }
    }
}

// Function 2: Display message
void displaymessage(int searchvalue, int location[2]){
    if (location[0] != -1 && location[1] != -1){
        cout<<" Number "<<searchvalue<<" was found in row "<<location[0]<<" and column "<<location[1]<<endl;
    } else{
        cout<<" Number "<<searchvalue<<" was not found "<<endl;
    }
}

