/*
Danah Stallings
lab 5, AI as a C++ Coding Assistant
Feb 3, 2026
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ---- Example 2: Google Assistant ----"<<endl;
    
    // type a word and save it as a variable named 'word'
    string word;
    cout<<"Enter a word: ";
    cin>>word;

    // print the 2nd character (index 1, as C++ starts at 0)
    if (word.length() >=2) {
        cout<<"The 2nd character is: "<<word[1]<<endl;
    }
    
    //find and print the length of the word
    cout<<"the lenght of word is: "<<word.length()<<endl;

    // replace 2 characters staring from the 3rd character (index 2) with "--$--"
    //.replace(start_index, number_of_chars, new_string)
    if (word.length() >= 3){
        word.replace(2,2, "--$--");
        cout<<"After repalcement: "<<endl;
    }
    
    // remove 3 characters from the end of the message
    // .erase(start_index, number_ofchars)
    if (word.length() >= 3){
        word.erase(word.length() - 3,3);
        cout<<"After removing last 3 characters: "<<word<<endl;
    }

    return 0;

}
    // --- AI Assistant Used: ChatGPT ---
    // Q1) Was the code correct? I am not sure if the code was correct because I was unable to run to code.
    // Q2) Was it readable and properly commented? Not Applicable.
    // Q3) Were you able to explain each line of code? Not Applicable.
    // Q4) Did it use the same programming concepts we learned in class? Google Al used alot of the same concepts we learned in class like the "cin, cout, replace method, etc." But they also used 'if' and writing the code differntly like '(word.length() >= 3)'
    // Q5) Terminal Output? Not Applicable.