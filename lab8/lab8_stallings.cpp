/*
Danah Stallings
Feb 11, 2026
lab 8, control flow using switch-case statement
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- Example 1: switch-case-----"<<endl;
    // use switch-case staement to ask the user to select a dayoff
    // declare variables
    int day;
    string dayoff = " ";
    // prompt message
    cout<<"Select a dayoff: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuseday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    // collect the dayoff
    cin>>day;

    // switch-case statement
    switch (day)
    {
    case 1:
        dayoff = "Monday";
        break;
    case 2:
        dayoff = "Tuesday";
        break;
    case 3:
        dayoff = "Wednesday";
        break;    
    case 4:
        dayoff = "Thursday";
        break;   
    case 5:
        dayoff = "Friday";
        break;     
    default:
        dayoff = "invalid";
        break;        
    }

    // prompt result
    cout<<"Your dayoff is "<<dayoff<<endl;

    cout<<"\n----- Example 2: switch-case-----"<<endl;
    // use switch-case statement to pick a gender
    // declare variables
    char gender;
    // prompt message
    cout<<"Select a gender: ";
    cout<<"f for female"<<endl;
    cout<<"m for male"<<endl;
    cout<<"o for other"<<endl;
    // collect gender
    cin>>gender;

    // switch-case statement
    switch (gender)
    {
    case 'f': case 'F':
        cout<<"Gender = Female"<<endl;
        break;
    case 'm': case 'M':
        cout<<"Gender = Male"<<endl;
        break;
    case 'o': case 'O':
        cout<<"Gender = Other"<<endl;
        break; 
    default:
        cout<<"Gender = Undefined"<<endl;
        break; 
    }      

    cout<<"\n----- Lab Exercise-----"<<endl;
    int num1, num2;
    char operation;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    
    // Operations
    cout<<"Select an operation: "<<endl;
    cout<<"+ for addition"<<endl;
    cout<<"- for subtraction"<<endl;
    cout<<"* for multiplication"<<endl;
    cout<<"/ for division"<<endl;
    cout<<"q to exit the program"<<endl;
    cout<<"% for modulus"<<endl;
    cout<<"Enter the operation: "<<endl;
    cin>>operation;

    // switch-case
    switch (operation)
    {
    case '+': 
        cout<<"operation = +"<<endl;
        break;
    case '-':
        cout<<"operation = -"<<endl;
        break;  
    case '*': 
        cout<<"operation = *"<<endl;
        break;
    case '/': 
        cout<<"operation = /"<<endl;
        break;  
    case 'q': 
        cout<<"operation = q"<<endl;
        break;
    case '%': 
        cout<<"operation = %"<<endl;
        break;  
    default:
        cout<<"operation = invalid"<<endl;
        break;     
    }

    if(num1 + num2){
        cout<<num1<<"operation: "<<num1 + num2 <<endl;
        if(num1 - num2)
           cout<<num1<<"operation: "<<num1 - num2 <<endl;
        else
           cout<<num1<<"\t"<<num2<<endl;
    }
    if(num1 * num2){
        cout<<num1<<"operation: "<<num1 * num2 <<endl;

    }
        if(num2!=0){
             cout<<num1/num2<<"operation: "<<num1 / num2 <<endl;
    }
    else 
    {
        cout<<"Error: modulus "<<endl;
        cout<<"Error: invalid operation "<<endl;
    }
    
    // prompt result
    cout<<"Operation is "<<operation<<endl;

    return 0;
}