/*
Danah Stallings
Mar 11, 2026
lab 12, nested loop
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- Example 1: Algorithm of a loop ---- "<<endl;
    int count = 0;
    int i = 10;

    while(i>5){
        i--;
        if(i%2==0){
            count += i;
            continue;
        }
        count -= 3;
    }
    cout<<"Final count is "<<count<<endl;

    /*TABLE ANALYSIS
    loop
    iteration     |       i--         |  if(i%2==0)  |      count
    --------------------------------------------------------------------------------------
          1       | i = 10 - 1 = 9    |    false     | count -= 3 --> count = 0 - 3 = -3
    --------------------------------------------------------------------------------------
          2       | i = 9 - 1 = 8     |    true      | count += i --> count = -3 + 8 = 5 
    --------------------------------------------------------------------------------------
          3       | i = 8 - 1 = 7     |    false     | count -= 3 --> count = 5 - 3 = 2  
    --------------------------------------------------------------------------------------
          4       | i = 7 - 1 = 6     |    true      | count += i --> count = 2 + 6 = 8
    --------------------------------------------------------------------------------------
          5       | i = 6 - 1 = 5     |    false     | count -= 3 --> count = 8 - 3 = 5
    --------------------------------------------------------------------------------------
          6   (STOP)   


    cout--> Final count is 5

    */

    cout<<"\n---- Example 2: Nested loop ---- "<<endl;
    // A loop inside of another loop
    // one iteration of the outer loop, one complete cycle of the inner loop will run
    int outer = 0;
    // Outer loop
    while(outer++ < 3){
        cout<<"OUTER LOOP"<<outer<<endl;

        // Inner loop
        int inner = 0;
        while(inner++ <=5){
            cout<<inner<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n---- Example 3: Nested loop ---- "<<endl;
    // simulate a cinema seats arrangment
    // seats per row, row = outer loop, seats = inner loop

    int rows, seats_row;
    cout<<"Enter the number of row: ";
    cin>>rows;
    cout<<"Enter the number of seats per row: ";
    cin>>seats_row;

    cout<<"Seating Arrangement:"<<endl;
    for(int r=1; r<=rows ; r++){
        for(int s=1; s<=seats_row; s++){
            cout<<"Row "<<r<<"seat = "<<s<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n---- Example 4: Simple 2D graph ---- "<<endl;
    // 9-by-9 graph
    const int GRIDSIZE = 9;
    for(int row = 1; row<GRIDSIZE; row++){
        for(int col = 1; col<=GRIDSIZE; col++){
            if(col==5 || row==5)
                cout<<" x ";
            else    
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n---- Example 5: 2D graph ---- "<<endl;
    // 10-by-10 graph, plot letter H
    const int GRID = 10;
    for(int row = 1; row<=GRID; row++ ){
        for(int col = 1; col <= GRID ; col++){
            if((col>=3 && col<=4 && row>=2 && row<=9) || (row>=5 && row<=6 && col>=5 && col<=6) || (col>=7 && col<=8 && row>=2 && row<=9))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }


    cout<<"\n---- Lab Exercise: A ---- "<<endl;
    int sum=0, count1 =0;
        for (int n = 20; n> 0; n-=2){
            if (n%3 ==0){
            count1++;
            continue;
        }
        sum += n;
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count1<<endl;

    /*TABLE ANALYSIS
    loop
    iteration     |    n     |  if(n%3==0)  |     count       |      sum
    --------------------------------------------------------------------------------------
          1       | 20       |    false     |  0              | 0 + 20 = 20
    --------------------------------------------------------------------------------------
          2       | 18       |    true      |  0 + 1 = 1      | 20
    --------------------------------------------------------------------------------------
          3       | 16       |    false     |  1              | 20 + 16 = 36
    --------------------------------------------------------------------------------------
          4       | 14       |    false     |  1              | 36 + 14 = 50
    --------------------------------------------------------------------------------------
          5       | 12       |    true      |  1 + 1 = 2      | 50
    --------------------------------------------------------------------------------------
          6       | 10       |    false     |  2              | 50 + 10 = 60
    --------------------------------------------------------------------------------------
          7       | 8        |    false     |  2              | 60 + 8 = 68
    --------------------------------------------------------------------------------------   
          8       | 6        |    true      |  2 + 1 = 3      | 68
    -------------------------------------------------------------------------------------- 
          9       | 4        |    false     |  3              | 68 + 4 = 72
    -------------------------------------------------------------------------------------- 
         10       | 2        |    false     |  3              | 72 + 2 = 74
    -------------------------------------------------------------------------------------- 

    cout--> Sum is 74

    */


    cout<<"\n---- Lab Exercise: B ---- "<<endl;
    int q=0, add=0;
    while(q<=10){
        q++;
        if(q<5 && q !=2){   
            cout<<"q = "<<q<<endl;
            }
        else{continue;}
        add +=q;
    }
    cout<<"Add = "<<add<<endl;


     /*TABLE ANALYSIS
    loop
    iteration     |     q    |  if(q<5 && q !=2)  |     else      |    sum
    --------------------------------------------------------------------------------------
          1       | 1        |        true        |     false     | 0 + 1 = 1
    --------------------------------------------------------------------------------------
          2       | 2        |        false       |     true      | 1
    --------------------------------------------------------------------------------------
          3       | 3        |        true        |     false     | 1 + 3 = 4
    --------------------------------------------------------------------------------------
          4       | 4        |        true        |     false     | 4 + 4 = 8
    --------------------------------------------------------------------------------------
          5       | 5        |        false       |     true      | 8
    --------------------------------------------------------------------------------------
          6       | 6        |        false       |     true      | 8
    --------------------------------------------------------------------------------------
          7       | 7        |        false       |     true      | 8
    --------------------------------------------------------------------------------------   
          8       | 8        |        false       |     true      | 8
    -------------------------------------------------------------------------------------- 
          9       | 9        |        false       |     true      | 8 
    -------------------------------------------------------------------------------------- 
         10       | 10       |        false       |     true      | 8
    -------------------------------------------------------------------------------------- 
         11       | 11       |        false       |     true      | 8
    -------------------------------------------------------------------------------------- 

    cout--> Add is 8

    */

    // Both codes were ran and the outputs matched step 1. 
    // The error that occurred was declaring the inital value. 
    // I forget the the integer was already declared. 
    // To fix that mistake, I changed the integer from 'i' to 'q'.


    return 0;
}