/*
Danah Stallings
Homework 3 - For Loop
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- Program 1 ---- "<<endl;
    int number;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int a = 1; a <= 10; a++){
        cout<<"Enter number "<<a<<"\t";
        cin>>number;

        if(number>0){
        positive++;
    }
        else if(number<0){
        negative++;
    }
        else{
        zero++;
    }
}
        cout<<"\n Total positive numbers = "<<positive<<endl;
        cout<<"Total negative numbers = "<<negative<<endl;
        cout<<"Total zeros = "<<zero<<endl;

        cout<<"\n---- Program 2 ---- "<<endl;
        int days;
        double sales, total_sales = 0, average_sales;
        cout<<"Enter the number of days: ";
        cin>>days;

   
        while(days<= 0){
        cout<<"Number of days must be greater than 0. Please re-enter: ";
        cin>>days;
    }
        for(int d = 1; d <= days; d++){
        cout<<"Enter sales for day "<<d<<": $";
        cin>>sales;

        total_sales += sales;
    }

        average_sales = total_sales/days;
        cout<<"\n Total sales $ "<<total_sales<<" for "<<days<<"days. Average daily sales $ "<<average_sales<<endl;


    return 0;
}