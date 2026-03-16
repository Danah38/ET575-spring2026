/*
Danah Stallings
March 16, 2026
lab 13, introduction to function
*/
#include<iostream>
#include "lab13_function_stallings.cpp"

using namespace std;

int main(){
    cout<<"\n----- example 1: void function "<<endl;
    printHello();
    printHello();

    cout<<"\n----- example 2: passes values"<<endl;
    greeting("Peter");
    greeting("Annie");

    cout<<"\n----- example 3: triple number"<<endl;
    int n = triplenumber(3);
    cout<<n<<endl;
    cout<<triplenumber(5)<<endl;

    cout<<"\n----- example 4: check a number"<<endl;
    cout<<checknumber(-10)<<endl;
    cout<<checknumber(0)<<endl;
    cout<<checknumber(5)<<endl;

    cout<<"\n----- example 5: function composition"<<endl;
    // int area_rec = arearectangle(validpositive(),(validpositive())
    int length = validpositive();
    int width = validpositive();

    int area_rec = arearectangle(length, width);
    
    printarea(length, width, area_rec);

    return 0;
}
