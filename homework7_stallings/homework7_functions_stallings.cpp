/*
Danah Stallings
April 19, 2026
Homework 7, Loop in an array
*/
#include<iostream>

using namespace std;

int collectsize(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    return size;
}

void populatenumbers(int *ar, int s){
    for(int p = 0; p<s; p++){
        ar[p] = rand() % 99 + 1;
    }
}

void printnumbers(int *ar, int s){
    cout<<"Array values: ";
    for(int p = 0; p<s; p++){
        cout<<ar[p]<<" ";
    }
    cout<<endl;
}

int arraymin(int *ar, int s){
    int min = ar[0];
    for(int p = 1; p<s; p++){
        if(ar[p]<min) {
            min = ar[p];
        }
    }
    return min;
}

float arrayavg(int *ar, int s){
    int sum = 0;
    for(int p = 0; p<s; p++){
        sum += ar[p];
    }
    return (float)sum/s;
}
