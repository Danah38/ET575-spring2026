/*
Danah Stallings
March 23, 2026
Lab 15, Random numbers
*/
#include<iostream>

using namespace std;

#include "lab15_functions_stallings.cpp"

int main(){
    cout<<"\n example 1: randon number "<<endl;
    cout<<randomnumber()<<endl;
    
    cout<<"\n example 2: randon number between 0 and 9 "<<endl;
    cout<<randon_0_9()<<endl;

    cout<<"\n example 3: randon number between 5 and 12 "<<endl;
    cout<<randon_5_12()<<endl;

    
    cout<<"\n example 4: matching numbers "<<endl;
    int roll1 = 1+rand()%6;
    cout<<endl<<endl;
    int roll2 = 1+rand()%6;
    bool resultmatch = matchdices(roll1,roll2);
    printdices(roll1, roll2, resultmatch);

    
    cout<<"\n Lab Exercise: Function 1 "<<endl;
    int die1 = rollDie();
    int die2 = rollDie();
    srand(time(0));
    cout<<"Die 1: " << die1 <<endl;
    cout<<"Die 2: " << die2 <<endl;

    bool result = isSnakeEyes(die1, die2);

    printresult(result);
    
    return 0;
}


