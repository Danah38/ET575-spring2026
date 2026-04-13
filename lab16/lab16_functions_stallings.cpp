/*
Danah Stallings
lab 16, Pointers and Intro to array
April 13, 2026
*/
#include<iostream>

using namespace std;

// Example 1: Pointer and Reference
void pointerreference(){
    int num = 12;
    char syn = 'T';
    string n = "Peter";

    // Declare the pointer
    int* pointerint;
    char* pointerchar;
    string* pointerstring = &n; // declare and initialized a pointer

    // Check a pointer ==> show memory address
    cout<<"int pointer "<<pointerint<<endl;

    // Assign value to a pointer
    pointerint = &num;
    pointerchar = &syn;

    // Check pointers' value
    cout<<"int pointer =    "<<pointerint<<endl;
    cout<<"char pointer =   "<<pointerchar<<endl;
    cout<<"string pointer = "<<pointerstring<<endl;

    // Use dereference operator to obtain the value of the pointers' memory address
    cout<<"value of int pointer =        "<<*pointerint<<endl;
    cout<<"value of the char pointer =   "<<*pointerchar<<endl;
    cout<<"value of the string pointer = "<<*pointerstring<<endl;

}

  // Example 2: Pass pointer into a function
  void printvalue(string n){
    cout<<"Value = "<<n<<endl;
  }

  // Pass a pointer
  void printaddress(string* n){
    cout<<"Pointer = "<<n<<endl;
  }

  // Passing a reference value
  void printreference(string& n){
    cout<<"Pointer value = "<<n<<endl;
  }

  // Example 3: Array
  void introarray(){
    // declare an array of size 5
    int scores[5];

    // assign values to an array. Use indexing to acess each cell in an array. Indexing starts from 0
    scores[0] = 90; // accessing the first (most-left) cell in array scores
    scores[1] = 70;
    scores[2] = 86;
    scores[3] = 92;
    scores[4] = 60;

    // Find the average of the scores
    float average = (scores[0]+scores[1]+scores[2]+scores[3]+scores[4])/5.0;
    cout<<"The average is "<<average<<endl;

    // Intialize an array
    char symbols[3] = {'%','$','#'};
    cout<<"The second symbol is = "<<symbols[1]<<endl;

    // Intialize an array without an array's size
    string names[] = {"Peter","Annie"};

    cout<<"The first name is = " <<names[0]<<endl;
  }