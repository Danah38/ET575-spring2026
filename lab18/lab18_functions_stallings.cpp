/*
Danah Stallings
April 20, 2026
lab 18: Array application
*/
#include<iostream>
using namespace std;
// Example 1: Search program
// Function 1: Function to collect up to 5 consecutive positive integers.
// The collection will stop if a negative number is entered.
// If there is less than five numbers collected, the function will reference to the array size.
void fillarray(int *arr, int &numberuserindex, int arraysize){
    int number, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index ++;
        }
    }while(number>0 && index<arraysize);
    
    // Update the index of the last positve number
    numberuserindex = index;
}

// Function 2: Print each elements in an array
void printelement(int *arr, int sizearray){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// Function 3: Search function
int search(int *arr, int numberuserindex, int target){
    int index = 0;
    bool found = false;

    while(!found && index<numberuserindex){
        if(target == arr[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index;
    else 
        return -1;

}

// Exercise: Loop Array Application
int collectnumber(int *arr, int arraysize){
    int num;
    int index = 0;
    cout<<"Enter up to 5 non-zero integers(0 to stop):" <<endl;
     while(index < arraysize){
        cin>>num;
        if(num == 0){
            arr[index] = num;
            index++;
        }
}
    return index; 
}

double averagenumber(int arr[], int listsize){
    int sum = 0;
    for(int r = 0; r < listsize; r++){
        sum += arr[r];
    }

    return (double)sum / listsize;
}

int closestmean(int arr[], int listsize, double avg){
    int closest = arr[0];
    double mindiff = abs(arr[0] - avg);

    for(int r = 1; r < listsize; r++){
        double diff = abs(arr[r] - avg);

        if(diff<mindiff){
            mindiff = diff;
            closest = arr[r];
        }
    }
    return closest;
}

void printresult(int *arr, int listsize ,double avg, int closest){
    for(int r = 1; r < listsize; r++){
        cout<<arr[r]<<"\t";
    }
    cout<<"The closest number to average "<<avg<<" is "<<closest<<listsize<< "." <<endl;
}
