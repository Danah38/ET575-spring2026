/*
Danah Stallings
May 04, 2026
Homework 10, file streaming 
*/

#include<iostream>
#include<fstream>
  
using namespace std;

// Function 1: Displace file context
void displacefilecontext(string filename){
    ifstream inputfile(filename);
    if(! inputfile){
        cout<<"Error opening file: "<<filename<<endl;
      return;
}
string line;
    while(getline(inputfile, line)){
        cout<<line<<endl;
    }
        inputfile.close();
}

// Function 2: Total count of the words in the file
void totalcountwords(string filename, string name){
    ifstream inputfile(filename);
    ofstream outputfile("wordcounts.txt");
    string name;

    if(! inputfile){
        cout<<"Error opening file: " <<filename<<endl;
        return;
    }
    int wordcount =
}

// Function 3: Count one specific word 
void appendfile(string msg){
    ofstream file("wordcounts.txt", ios::app);

    if (file.is_open()){
        file<<msg<<endl;
        file.close();
        cout<<"Message appended successfully.\n";
    } 
}
    