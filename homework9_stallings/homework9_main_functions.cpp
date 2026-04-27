/*
Danah Stallings
April 26, 2026
Homework 9, Arrays application
*/
#include<iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

#include "homework9_functions_stallings.cpp"

int main(){
    cout<<"\n----- Reversing the values of an array  -----"<<endl;
    srand(time(0));

    int sizearray = arraysize(); 
    int noise[100];               
    
    randPopulate(noise, sizearray);

    cout<<"Original Set:"<<endl;
    print(noise, sizearray);

    reverse(noise, sizearray);

    cout <<endl<<"Reversed Set:"<<endl;
    print(noise, sizearray);

    return 0;
}