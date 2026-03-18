/* Homework 2: Branching 

Danah Stallings

Feb 15, 2026

*/ 
#include<iostream>
using namespace std;

int main(){
    cout<<"\n----- Program 1: Age Eligibility ----"<<endl;
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age<13)
{
    cout<<"Not eligible for any activities. "<<endl;
}
    else if(age>=13 && age<=17)
{
    cout<<"Eligible for youth activities. "<<endl;
}
    else if(age>=18 && age<=64)
{
    cout<<"Eligible for adult activities. "<<endl;
}
else if(age<=65)
{
    cout<<"Eligible for senior activities. "<<endl;
}
else if(age<0 || age>120)
{
    cout<<"Invalid age. Please enter a valid age."<<endl;    
}

cout<<"\n----- Program 2: Nested Conditional Statement  ----"<<endl;
int num1, num2;
cout<<"Enter num1 and num2: "; 
cin>>num1>>num2;

if(num1<=0 && num2<=0){
    cout<<"False alarm! The sum is 0"<<endl;
}
else if(num1>=1 && num2<=100){
    cout<<"Number multiplied by 5"<<endl; 
    cout<<"25 is a pentagon"<<endl;
      if(num1>=1 && num2<=100){
        cout<<"Is the number odd"<<endl;
        cout<<"25 is an odd guess"<<endl;
    }
}
else if(num1>=101 && num2<=200){
      cout<<"The new lucky number is 38"<<endl; 
      if(num1>=201 && num2<=999){
        cout<<"52 is a dreaming number"<<endl;
    }
}
else if(num1<=1000 && num2>=1000){
    cout<<"Is the number even"<<endl;
    cout<<"The number approaches to the infinite evenly!"<<endl;
    if(num1<=1000 && num2>=1000){
       cout<<"The number is greater than 2000+"<<endl;
       cout<<"The number approaches to the infinite and beyond!"<<endl;
    }
}

cout<<"\n----- Program 2: Nested Conditional Statement  ----"<<endl;
int choice;
int temperature;
int result;

// Display Meun
cout<<"Temperature conversion\n";
cout<<"1. Celsius to Fahrenheit\n";
cout<<"2. Fahrenheit to Celsius\n";
cout<<"3. Kelvin to Celsius\n";
cout<<"4. Kelvin to Fahrengeit\n";
cout<<"5. Exit\n";

cout<<"Slect an option from 1 to 5:";
cin>>choice;

// switch-case
switch (choice)
{
case 1: 
    cout<<"Enter temperature in Celsius"<<endl;
    cin>>temperature;
    result = temperature *(9.0/5.0) + 32;
    cout<<"Result"<<result<<"Fahrenheit\n";
    break;
case 2:
    cout<<"Enter temperature in Fahrenheit"<<endl;
    cin>>temperature;
    result = (temperature - 32)*(5.0/9.0);
    cout<<"Result"<<result<<"Celsius\n";
    break;  
case 3: 
    cout<<"Enter temperature in Kelvin"<<endl;
    cin>>temperature;
    result = temperature - 273.15;
    cout<<"Result"<<result<<"Celsius\n";
    break;
case 4: 
    cout<<"Enter temperature in Kelvin"<<endl;
    cin>>temperature;
    result = (temperature - 273.15)*(9.0/5.0) + 32;
    cout<<"Result"<<result<<"Fahrenheit\n";
    break;  
case 5: 
    cout<<"Exit\n"<<endl;
    break;
default:   
    cout<<"Invalid selection = invalid"<<endl;
    break;     
}

    return 0;
}