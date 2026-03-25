/*
Danah Stallings
March 23, 2026
Lab 15, Random numbers
*/
#include<iostream>
#include<cstdlib>
#include<time.h>
#include <iomanip>
#include <cmath>

using namespace std;

// Exam 2 Review 
// Question 4
void printvalue(string v){
    cout<<"Pass value = "<<v<<endl;
}
void passref(string& v){
    cout<<"Pass refernce = "<<v<<endl;
    v = "Good Morning";
}
void passmemory(string* v){
    cout<<"Pass refernce = "<<v<<endl;
}

// Question 5
int num = 5;
int add(int n1, int n2){
    int sum = n1+n2; 
    return sum;
}
void printresult(int sum){
    cout<<"The total sum is: "<<sum<<endl;
}

void db_print_num(){
    num *= 2; // num = num*2
    cout<<"Double = "<<num<<endl;
}
void tr_print_num(){
    num *=3;
    cout<<"Triple = "<<num<<endl;
}

// Question 6
// function 2:
int rand_side(){
    return rand() % 20 + 1;
}

// Function 2:
double hyp(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// Function 3:
void printresult(int side1, int side2, double hypotenuse) {
    cout<<fixed << setprecision(2);
    cout<<"The hypotenuse of a right angle with side " <<side1 << " and " <<side2<<" is = " <<hypotenuse <<endl;
}

// Question 7:
int collectNumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}

// Function 2: check descending order
bool inOrder(int a, int b, int c){
    return(a >= b && b >= c);
}

// Function 3: print result and handle repeat
void runProgram(int n1, int n2, int n3, bool result){
    if (result){
        cout<<"The numbers are in descending order." <<endl;
    } else {
        cout<<"The numbers are NOT in descending order." <<endl;
    }

    char choice;
    cout<<"Do you want to run the program again? (y/n): ";
    cin>>choice;

    if (choice == 'y' || choice == 'Y'){
        int num1 = collectNumber();
        int num2 = collectNumber();
        int num3 = collectNumber();
        bool desc_order = inOrder(num1, num2, num3);
        runProgram(num1, num2, num3, desc_order);
    }
}
