/*
Danah Stallings
April 27, 2026
lab 20: Parsing and File handling
*/
#include <fstream>
#include<iostream>
#include <string>
using namespace std;

// Example 1: Using cin to validate a data type
// If the input is a proper data type, cin will set a state to 'goodbit'
// If the input is not a proper data type, cin will set a state to 'failbait'

// Function to collect and return an integer
int collectnum(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(cin.fail()){
        // clear the failbait
        cout<<"Wrong data type! "<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        // recollect the number using recursive function
        return collectnum();
    }
    else{
        return n;
    }
}
    
// Example 2: Read File
// Input file = ifstream
// Output file = ofstream
// fstream has ifstream and ofstream 
// After the library, we can declare an ifstream and ofstream variables objects
#include<fstream>
void readfile(string filename){
    // declare an object to handle ifstream
    ifstream fin;
    // declare a variable to hold each line of the read file
    string line;
    // declare a cariable as a line counter
    int linecounter = 1; // first line
    // open the file
    fin.open(filename);
    // use a loop to go through each line in the opened file
    while(getline(fin, line)){
        cout<<"Sentence "<<linecounter<<" = "<<line<<endl;
        linecounter ++;
    }
    
    // close the file input when finished reading
    fin.close();
}

// Example 3: Write Files
// function to write or create a new file
void writefile(string filename){
    // declare an object to handle output files, fout
    ofstream fout;
    // open the file
    // if the file exists, it will overwrite
    // if the file doesn't exists, it will vreat a new file
    fout.open(filename);
    // write "Student's full name" in the first line
    fout<<"Lab 20, file streaming\n";
    fout<<"April 27, 2026\n";
    // close the file output when finished writing
    fout.close();
}

// Example 4: Append data into an existing file 
void appendmsg(string filename, string msg){
    ofstream fout;
    fout.open(filename, ios::app);
    // append the following data
    for(int n = 3; n>=0 ; n--){
        fout<<n<<endl;
    }
    fout<<"GAME OVER\n"<<msg<<endl;

    fout.close();
}

// Example 5: Check if a file exists
void checkfile(string filename){
    ifstream fin;
    fin.open(filename);

    // if the filename doesn't exist in the root directory,
    if(fin.fail()){
        cout<<"File "<<filename<<" doesn't exist!"<<endl;
        exit(1);
    }

    // if the filename exists, the read all the line
    string eachline;
    while(getline(fin, eachline )){
        cout<<"Line 1 = "<<eachline<<endl;
    }

    // close the file 
    fin.close();
}

// Lab 20 Assignment
// Function 1
void createfile(){
    ofstream file("data_user.txt");
    string name;

    if(file.is_open()){
        file<<"This is my output file : Type your full name.\n";
        file.close(); 
        cout<<"File created successfully.\n";
    }
    else{
        cout<<"Error creating file.\n";
    }
}

// Function 2 
void appendfile(string msg){
    ofstream file("data_user.txt", ios::app);

    if (file.is_open()){
        file<<msg<<endl;
        file.close();
        cout<<"Message appended successfully.\n";
    } else {
        cout<<"Error opening file for appending.\n";
    }
}

// Function 3 
void readfile(string filename){
    ifstream fin;
    string line;
    fin.open(filename);

    while(getline(file, line)){
        cout<<"File Contents "<<line<<endl;
}
    file.close();
}

