/*
Danah Stallings
Lab 14, Function
March 18, 2026
*/
#include<iostream>
#include "lab14_functions_stallings.cpp"
using namespace std;

int main(){
    cout<<"\n ----- Example 1: function calling functions ------ "<<endl;
    int calculate = calculatedb(2,3);
    cout<<calculate<<endl;

    cout<<"\n ----- Example 2: recursive functions ------ "<<endl;
    cheers(4);

    cout<<"\n ----- Example 3: linear recursive functions ------ "<<endl;
    int n = linearfunction(3);
    cout<<"The final result = "<<n<<endl;

    cout<<"\n ----- Example 4: built-in functions ------ "<<endl;
    int side1 = collectnumber();
    int side2 = collectnumber();
    float h = hypotenuse(side1,side2);
    printresult(side1, side2, h);

    cout<<"\n ----- Lab Exercise: Create three functions ------ "<<endl;
    double x1, y1, x2, y2, distance;

    cout << "Enter coordinates for point 1:" << endl;
    x1 = getPositiveNumber();
    y1 = getPositiveNumber();

    cout << "Enter coordinates for point 2:" << endl;
    x2 = getPositiveNumber();
    y2 = getPositiveNumber();

    distance = calculateDistance(x1, y1, x2, y2);

    printResult(x1, y1, x2, y2, distance);


    return 0;
}