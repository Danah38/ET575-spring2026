/*
Danah Stallings
Jan 26, 2026
lab 1, isotream
*/

// header library
#include<iostream>

using namespace std;

// main function is the executable part of your c++ file
int main(){
    cout<<"\nExample 1: output stream, cout "<<endl<<endl;
    cout<<"\tWelcome to C++ "<<endl;

    cout<<"\nExample 2: declaring variables "<<endl;
    // declaring variables
    int number;
    string username;
    char symbol;

    // assign value to a variable
    username = "danah38";
    symbol = '%';
    number = 9;

    // print values in a variable
    cout<<"Given username = "<<username<<endl;
    cout<<"Given number = "<<number<<endl;
    cout<<"Given symbol = "<<symbol<<endl;

    cout<<"\nExample 3: console in, cin"<<endl;
    // declaring variables
    float n = 3.5;
    string lastname;

    // collect last name from the user (Terminal)
    cout<<"Enter a last name: ";
    cin>>lastname;

    // print results
    cout<<"Welcome to C++ "<<lastname<<" your rate is "<<n<<endl;

    cout<<"EXERCISE"<<endl;
    // declare variables
    string country;
    char gender;
    int zipcode;
    float rate;

    // assign value to a variable
    country = "Trinidad";
    gender = 'f';
    zipcode = 501637;
    rate = 25.5;

    // print values in a variable
    cout<<"Given country = "<<country<<endl;
    cout<<"Given gender = "<<gender<<endl;
    cout<<"Given zipcode = "<<zipcode<<endl;
    cout<<"Given rate = "<<rate<<endl;
    
    // collect country from the user (Terminal)
    cout<<"Enter a country: ";
    cin>>country;

    // collect country from the user (Terminal)
    cout<<"Enter a gender: ";
    cin>>gender;

    // collect country from the user (Terminal)
    cout<<"Enter a zipcode: ";
    cin>>zipcode;

    // collect country from the user (Terminal)
    cout<<"Enter a rate: ";
    cin>>rate;

    // print results
    cout<<"Welcome to C++ "<<country<<" your rate is "<<n<<endl;
    cout<<"Welcome to C++ "<<gender<<" your rate is "<<n<<endl;
    cout<<"Welcome to C++ "<<zipcode<<" your rate is "<<n<<endl;
    cout<<"Welcome to C++ "<<rate<<" your rate is "<<n<<endl;

    return 0;   
}

