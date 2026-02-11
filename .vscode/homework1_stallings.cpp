/*
Danah Stallings
Homework 1: strings, string methods, and numerical variables
Feb 8, 2026
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\t---- Activity 1 ---- "<<endl;
    // string variables
    string greeting1 = "Welcome to";
    string greeting2 = "New York";

    // collect name 
    string name;
    cout<<"Enter your name ";
    cin>>name;

    // concentrate variable 
    string addstrings = greeting1 + "Welcome to" + greeting2 "New York";
    cout<<addstrings<<endl;
    cout<<greeting1+greeting2<<endl;

    // prompt the concentrate string
    cout<<"Welcome to "<<addstrings<<" New York "<<greeting1+greeting2<<endl;

    // length of the concentrated variable
    int addstrings_length = addstrings.length();
    cout<<"greeting1 "<<addstrings_length<<" greeting2"<<endl;

    // find word “ma” in the string
    string word = "Welcome";
    string sub_char = word.substr(6,7); // substract 5 characters from index me
    cout<<"Substracted characters = "<<sub_char<<endl;

    // replacement of a word
    cout<<"Oringinal word = "<<word<<endl;
    word.replace(6,7,"%---%");
    cout<<"After the replace method = "<<word<<endl;

    // prompt and aligned the result
    cout<<"\n result\tvalue\t " <<n<<endl;
    cout<<"\t addstring_length\t " <<n<<endl;
    cout<<"\t indexMe\t " <<n<<endl;
    cout<<"\t replaced message\t " <<n<<endl;


    cout<<"\t---- Activity 2 ---- "<<endl;
    // constant 
    const float pi = 3.14159;

    // radius and heigth
    float radius, height;
    cout<<"Enter radius" 10;
    cin>>radius
    cout<<"Enter height" 7;
    cin>>height

    // is the radius greeter than height
    cout<<"is the radius greater than the height? "<<check1<<endl;

    bool check1 = radius > height;

    // triple the height and increase the radius by 5
    radius += 15;
    height *= 21;

    // logical and comparsion operators
    cout<<"radius is not equal to height and greeter than height "<<(radius == height)<<endl;

    bool check2 = radius > height;
    bool check3 = radius = height;

    // calculate the volume of the right cylinder
    float volume = pi * radius * radius * height;

    bool check2 = radius > height; // check2 = false(0)
    bool check3 = radius = height; // check3 = true(1)

    bool logicalcom = check2 && check3; // false && true = false
    bool logicalcom2 = check2 && check3; // true && false = true
    
    // prompt and aligned the result
    cout<<"\n result\tvalue\t " <<n<<endl;
    cout<<"\nlogical comparison 1\t = "<<logicalcom<<endl;
    cout<<"logical comparison 2\t = "<<logicalcom<<endl;

    return 0;
}