/*
Mohammad Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Lab7A
unindent.cpp

Write a program unindent.cpp that reads input from cin and prints out each input line with leading spaces removed.
*/
#include <iostream>
#include <cctype>
using namespace std;

//prototype
string removeLeadingSpaces(string line);

int main(){
    string line;
    while (getline(cin, line)){
        cout << removeLeadingSpaces(line) << endl;
    //getline(cin, line);
    //cout << removeLeadingSpaces(line) << endl;
    //cout << removeLeadingSpaces("       int x = 1;  ") << endl;
    //it should return "int x = 1, "
    }
}
string removeLeadingSpaces(string line){
    //first you need to figure out the index(position) of the first non-space character of string 'line'
    int i;  //declare index i outside the for loop, so its still exists after the for loop.
    for(i = 0; i < line.size(); i++){
        //if(line[i] != ' ')
        if(!isspace(line[i]))       //gradescope wants us to use the isspace().........
            break;          //break the for loop, break can be used to break any kinds of for loop
    }
    string ans;     //empty string
    return line.substr(i);      //get used to substr function
}
















/*
Indentation Rule in c++:
After the '{', press TAB one time
But if it's a '}'...
    for(....){
    pressTAB line 1
    pressTAB line 2
    }  <-- pressTAB from beginning spot

string: " "
char: ' '
in c++, strings are mutable, meaning you can change/add/delete characters in a string, but in other languages like python, strings are immutable
similar to lab 6, declare another string 'ans' for returning


    string ans;     //empty string
    for(int j = i; j < line.size(); j++)
        ans += line[j];
    return ans;
   //In other words, 'ans' is a substring of line, so use the function substr
*/