/*
Danah Stallings
Homework 5 - Functions
March 19, 2026
*/
#include<iostream>

using namespace std;

// Program 1 
// Valid wind speed
int speed(){
int a;
    cout<<"Enter wind speed (m/s): ";
    cin>>a;

// Valid loop
while (a <= 0 || a >= 100){
    cout<<"Invalid input. Enter a positive number less than 100: ";
    cin>>a;
    }

    return a;
}

// Valid temperature
float temp(){
    float t;
    cout<<"Enter temperature (Celsius): ";
    cin>>t;

// Valid loop again
while (t > 10 || t <= -90){
    cout<<"Invalid input. Enter temperature <= 10 and > -90: ";
    cin>>t;
    }

    return t;
}

#include<cmath>
// Calculate wind chill index
float windspeed(int v, float tem){
    float result;
    result = 33 - (10 * sqrt(v) - v + 10.5) * (33 - tem);

    return result;
}

// Print result
void printresult(float windIndex){
    cout<<"The wind index is: "<<windIndex<<endl;
}

// Program 2
// Descending order entries
int collectnumber();
bool inorder(int a, int b, int c);
bool orderresult(int a, int b, int c);
void runprogram(int a, int b, int c, bool result);

// Collect a number
int collectNumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    return num;
}

// Check descending order
bool inOrder(int a, int b, int c){
    return(a >= b && b >= c);
}

// Display result
bool order_result(int a, int b, int c){
    bool result = inOrder(a, b, c);

    if(result)
        cout<<"Numbers are in descending order." <<endl;
    else
        cout<<"Numbers are NOT in descending order." <<endl;

    return result;
}

// Repeated function
void runprogram(int a, int b, int c, bool result){
    char choice;
    cout<<"Do you want to run the program again? (y/n): ";
    cin>>choice;

    while(choice == 'y' || choice == 'Y'){
        int num1 = collectNumber();
        int num2 = collectNumber();
        int num3 = collectNumber();

        bool desc = order_result(num1, num2, num3);

        cout<<"Do you want to run the program again? (y/n): ";
        cin>>choice;
    }
    cout<<"Program ended." <<endl;
}
