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
void totalcountwords(string filename){
    ifstream inputfile(filename);
    
    if(! inputfile){
        cout<<"Error opening file: " <<filename<<endl;
        return 0;
    }
    
    string word;
    int wordcount = 0;

    while (inputfile>>word){
        wordcount++;
    }

    inputfile.close();
    return wordcount;
}

// Function 3: Count one specific word 
int countEarthOccurrences(string filename){
    ifstream inFile(filename);

    if(!inputfile){
        cout<<"Error opening file: " <<filename<<endl;
        return 0;
    }

    string word;
    int count = 0;

    while (inputfile>>word){
        if(word == "Earth"){
            count++;
        }
    }
    inputfile.close();
    return count;
}


