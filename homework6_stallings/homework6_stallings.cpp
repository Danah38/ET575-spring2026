/*
Danah Stallings
Homework 6 - More about function, reference and pointer
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- Exercise 1) recursive function : ---- "<<endl;
    int* ptr;
    int var = 7;
    int foo = 21;
    ptr = &var;

    cout<<"Pointer 1 = "<<ptr<<endl;
    *ptr, cout<<"value 1 = "<<*ptr<<endl;

    ptr = &foo;
    ptr, cout<<"Pointer 2 = "<<ptr<<endl;
    *ptr, cout<<"value 2 = "<<*ptr<<endl;

    int& ref = var;
    cout<<"ref = "<<&ref<<endl;

    Exercise 2) recursive function 
    

    return 0;
    
}