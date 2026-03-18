/*
Danah Stallings
Homework 4 - For Loop
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- Question 1: ---- "<<endl;
    int number;

    do{
        cout<<"Enter a number greater than or equal to 10: ";
        cin>>number;

        if(number < 10){
            cout<<"Invalid number. Please try again."<<endl;
        }

    } 
        while(number < 10);
            cout<<number<<" is a valid number!" <<endl;

    cout<<"\n---- Question 2: ---- "<<endl;        
    int num1, num2;
    int min, max;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    if(num1 < num2){
        min = num1;
        max = num2;
    }
    else{
        min = num2;
        max = num1;
    }
    cout<<"Numbers from "<<min << " to "<<max<< ":"<<endl;

    while(min <= max){
        cout<<min<<" ";
        min++;
    }

    
    cout<<"\n---- Question 3: ---- "<<endl;  
    const int GRID = 11;

    for(int row = 0; row < GRID; row++){
        for(int col = 0; col < GRID; col++){
            if(col == 0 || (col == 0 && row < GRID/2) || (row == GRID/2 && col < GRID/2) || (col == GRID/2 && row > 0 && row < GRID/2)){
                cout<<"#";
            }
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }

    return 0;
}