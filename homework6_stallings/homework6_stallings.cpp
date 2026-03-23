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

    cout<<"\n---- Exercise 2) recursive function : ---- "<<endl; 
    int rose(int n){
    if (n<=0){
        return 1;
    }
    else{
        return (rose(n-1)*n);
    }
}

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The final answer is "<<rose(num);
    

    return 0;
    
}