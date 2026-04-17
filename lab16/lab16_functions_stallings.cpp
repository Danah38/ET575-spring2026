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

  // Example 4: Length of an array
  void lenghtarray(){
    // sizeof function returns the number of bytes of value
    cout<<"character = "<<sizeof(char)<<endl;
    cout<<"string = "<<sizeof(string)<<endl;
    cout<<"integer = "<<sizeof(int)<<endl;
    cout<<"float = "<<sizeof(float)<<endl;
    cout<<"double = "<<sizeof(double)<<endl;

    // Array
    int numbers[]={2,7,9,-10,3};

    cout<<"length of array numbers = "<<sizeof(numbers)<<endl;
    // To find the number of values in an array = total size of an array divided by the size of the data type
    cout<<"There is "<<(sizeof(numbers)/sizeof(int))<<" values in an array"<<endl;
  }

  // Example 5: Loop through an array
  void looparray(){
    const int s = 5;
    int arr[s] = {1,2,3,4,5};

    // Create a pointer to arr
    int *ptr_array = arr;

    // Loop through an array
    for(int index = 0; index<s ; index++){
      cout<<"index = "<<index<<" value = "<<arr[index]<<endl;
    }
  }

  // Example 6: Pass an array to a function
  // Function to populate data into an array
  void fillup(int arraysize, int arrnumbers[]){
    for(int index = 0; index<arraysize; index++){
      cout<<"Enter a number: ";
      cin>>arrnumbers[index];
    }
  }
  // Function to print all data in an array
  void printarray(int arraysize, int arrnumbers[]){
    for(int index = 0; index<arraysize; index++){
      cout<<arrnumbers[index]<<"\t";
    }
    cout<<endl;
  }  

   // Function to find the maximum number in an array
  int maxnumber(int arraysize, int *arrnumbers){
    int maxvalue = arrnumbers[0];
    for(int index = 0; index<arraysize; index++){
      if(arrnumbers[index]>maxvalue){
        maxvalue = arrnumbers[index];
      }
    }
    return maxvalue;

    // Lab 16 Assignment 
    int minnumber(int arraysize, int arrnumbers[]){
    int minvalue = arrnumbers[0];

    for(int index = 1; index<arraysize; index++){
        if(arrnumbers[index]<minvalue){ 
            minvalue = arrnumbers[index];
        }
    }
    return minvalue;
  }

  int findlowest(){
    int scores[5] = {60, 90, 75, 88, 100};

    return minnumber(5, scores);
  }


