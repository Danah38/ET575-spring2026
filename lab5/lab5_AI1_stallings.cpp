/*
Danah Stallings
lab 5, AI as a C++ Coding Assistant
Feb 3, 2026
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: ChatGPT Assistant ----"<<endl;

    string word;

    // ask user for input 
    cout<<"Enter a word: ";
    cin>>word;

    // print the 2nd character (index 1)
    cout<<"Second character: "<<word.at(1)<<endl;

    //find and print the length of the word
    cout<<"Lenght of word: "<<word.length()<<endl;

    // replace 2 characters staring from the 3rd character (index 2)
    word.replace(2,2, "--$--");
    cout<<"After removing last 3 characters: "<<word<<endl;

    return 0;
}
   // --- AI Assistant Used: ChatGPT ---
    // Q1) Was the code correct? Yes the code was correct.
    // Q2) Was it readable and properly commented? It was readable and properly commented.
    // Q3) Were you able to explain each line of code? Each line of code was easy to be explained.
    // Q4) Did it use the same programming concepts we learned in class? ChatGPT used alot of the same concepts we learned in class like the "cin, cout, replace method, etc." 
    // Q5) Terminal Output?  ---- Example 1: ChatGPT Assistant ----
Enter a word: word
Second character: o
Lenght of word: 4
After removing last 3 characters: wo--$--
