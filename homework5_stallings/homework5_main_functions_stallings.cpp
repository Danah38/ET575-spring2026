/*
Danah Stallings
Homework 5 - Functions
March 19, 2026
*/

#include<iostream>
#include "homework5_functions_stallings.cpp"
using namespace std;

int main(){
    cout<<"\n ----- Program 1: Wind chill calculation ------ "<<endl;
    int s = speed(); 
    float t = temp(); 
    printresult(windspeed(s,t));

    cout<<"\n ----- Program 2: Descending order entries ------ "<<endl;
    int num1 = collectnumber();
    int num2 = collectnumber();
    int num3 = collectnumber();
    bool desc_order = orderresult(num1,num2,num3);
    runprogram(num1,num2,num3,desc_order);

    return 0;
    
}