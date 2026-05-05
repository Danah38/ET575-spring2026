/*
Danah Stallings
May 04, 2026
Homework 10, file streaming
*/
#include<iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

#include "homework10_functions_stallings.cpp"

int main(){
    string filename = "Remembering_Earth.txt";
    string studentname;

    cout<<"Enter your full name: ";
    getline(cin, studentname);

    cout<<"\nFile contents:\n";
    displayfilecontents(filename);

    int totalwords = totalcountwords(filename);
    int earthcount = countearthoccurrences(filename);

    ofstream outputfile("wordcounts.txt");

    if(!outputfile){
        cout<<"Error creating wordcounts.txt"<<endl;
        return 1;
    }

    outputfile<<studentname<<endl;
    outputfile<<"Total number of words: "<<totalwords<<endl;

    outputfile.close();

    ofstream appendfile("wordcounts.txt", ios::app);

    appendfile<<"The word 'Earth' appears "<<earthcount<<"times in the document." << endl;

    appendfile.close();

    cout<<"\nResults written to wordcounts.txt"<<endl;

    return 0;

}