/*
Danah Stallings
lab 4, string and string method
Feb 2, 2026
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ---- example 1: string indexing ----"<<endl;
    // each character in a string can be accessed by its index number
    // index starts from 0, most-left character
    string firstname = "Peter";
    cout<<"The 4th character of the first name = "<<firstname[3]<<endl;
    cout<<"The 2nd character of the first name = "<<firstname.at(2)<<endl;

    cout<<"\n ---- example 2: string length ----"<<endl;
    // length method returns the amount of charcters in a string
    int firstname_length = firstname.length();
    cout<<"First name has "<<firstname_length<<" characters"<<endl;

    cout<<"\n ---- example 3: add or concatenate strings ----"<<endl;
    // + operator adds or concatenates strings
    string color = "orange";
    string animal = "cat";
    string addstrings = "My " + animal + " loves " + color + "toys";
    cout<<addstrings<<endl;
    cout<<color+animal<<endl;

    cout<<"\n ---- example 4: substract characters from a strings ----"<<endl;
    // substr() method susbtracts (extracts) characters from a string
    // substr(index from where the substraction will happen, amoung from characters to be extracted)
    string city = "Bayside";
    string sub_char = city.substr(3,4); // substract 4 characters from index 3
    cout<<"Substracted characters = "<<sub_char<<endl;

    cout<<"\n ---- example 5: insert characters into a strings ----"<<endl;
    // insert new characters into a string
    // insert(index from where the new characters will be inserted, characters to be inserted)
    // insert Queens- into Bayside. The result should be = BayQueens-side
    city.insert(3, "Queens-" );
    cout<<"After insert method = "<<city<<endl;

    cout<<"\n ---- example 6: add characters to the end of a strings ----"<<endl;
    // append method adds characters to the end of a string
    string fullname = "Peter Pan";
    // add the word "-neverland" to the end of the full name. The result should be 'Peter Pan@neverland'
    fullname.append("@neverland");
    cout<<"After append method = "<<fullname<<endl;

    cout<<"\n ---- example 7: replace characters in a string ----"<<endl;
    // replace method replaces characters in a string
    // replace(index where the replacement will happen, amount of characters to be replaced, string of new character)
    string word = "engineering";
    cout<<"Oringinal word = "<<word<<endl;
    // replace the word 'ee' with 'FUTURE'. The result will be "enginFUTUREring"
    word.replace(5,2,"FUTURE");
    cout<<"After the replace method = "<<word<<endl;

    cout<<"\n ---- example 8: erase characters in a string ----"<<endl;
    // erase(index where the erase will happen, amount of characters to be erased)
    word = "layout";
    cout<<"Original word = "<<word<<endl;
    // erase 'you' from word. The result should be 'lat'
    word.erase(2,3); // erase three characters from index 2
    cout<<"After erase method = "<<word<<endl;

    cout<<"\n ---- example 9: find characters in a string ----"<<endl;
    // find method returns the index of the first found character
    word = "characters";
    // find letter 'a' from word
    int index_a = word.find("a");
    cout<<"Index for a = "<<index_a<<endl;
    // find the index for 'act' from word
    cout<<"Index for 'act' = "<<word.find("act")<<endl;

    cout<<"\n ---- EXERCISE: Lab Assignment 4 ----"<<endl; 
    string name = "word"; 
    cout<<"The 2nd character of the  = "<<name.at(1)<<endl;

    // print the 2nd character of the name
    cout<<"The 2nd character of the name = "<<name.at(1)<<endl;
    
    // length method returns the amount of charcters in a string
    int name_length = name.length();
    cout<<"Name has "<<name_length<<" characters"<<endl;

    // print the length of the name
    cout<<"The length of the word = "<<name.at(1)<<endl;

    // replace method 
    string replaced = "word";
    cout<<"Oringinal word = "<<word<<endl;
    // replace the letter 'r' with '--$--'. The result will be "wo--$--d"
    word.replace(3,1,"--$--");
    cout<<"After the replace method = "<<word<<endl;

    // erase method
    word = "wo--$--d";
    cout<<"Original word = "<<word<<endl;
    // erase '--d' from word. The result should be 'w--$'
    word.erase(5,3); // erase three characters from index 5
    cout<<"After erase method = "<<word<<endl;
    return 0;
}