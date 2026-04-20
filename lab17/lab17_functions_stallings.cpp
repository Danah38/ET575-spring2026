/*
Danah Stallings
April 19, 2026
Lab 17, Passing array in a function
*/
#include<iostream>

using namespace std;

int sumevennumbers(int arr[], int size){
    int sum = 0;
    for(int d = 0; d < size; d++){
        if(arr[d] % 2 == 0){
            sum += arr[d];
        }
    }
    return sum;
}

int countnegativenumbers(int arr[], int size){
    int count = 0;
    for(int d = 0; d < size; d++){
        if(arr[d] < 0){
            count++;
        }
    }
    return count;
}