/*
Danah Stallings
April 19, 2026
Homework 7, Loop in an array
*/
#include<iostream>

using namespace std;

#include "homework7_functions_stallings.cpp"

int main(){
    cout<<"\n----- Loop in an array -----"<<endl;
    srand(time(0));
    int num = collectsize();
    int a[num];

    populatenumbers(a, num);
    printnumbers(a, num);

    cout<<"Minimum number:\t " <<arraymin(a, num)<<endl;
    cout<<"The average of numbers:\t "<<arrayavg(a, num)<<endl;

    return 0;
}