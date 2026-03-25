/*
Danah Stallings
March 23, 2026
Lab 15, Random numbers
*/
#include<iostream>

using namespace std;

#include "Exam2_review_functions_stallings.cpp"

int main(){
    cout<<"\n Exam 2 Review: Question 4 "<<endl;
    string something = "ET575";
    printvalue(something);	 			
    passref(something); 					
    printvalue(something);				
    passmemory(&something);

    cout<<"\n Exam 2 Review: Question 5 "<<endl;
    int sum = add(3,-2) + add (5,10);
    printresult(sum);						
    db_print_num();					
    tr_print_num();	

    cout<<"\n Exam 2 Review: Question 6 "<<endl;
    srand(time(0));
    int side1 = rand_side();
    int side2 = rand_side();

    double result = hyp(side1, side2);

    printresult(side1, side2, result);

    cout<<"\n Exam 2 Review: Question 7 "<<endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1,num2,num3);
    runProgram(num1,num2,num3,desc_order);


    return 0;
}