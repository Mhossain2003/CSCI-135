/*
Mohammad Hossain
Professor: Mingh Nyugen
Date: 3/13/22
LAB 6A
test-ascii.cpp
Write a program test-ascii.cpp that asks the user to input a line of text 
(which may possibly include spaces). The program should report all characters from the input line together with their ASCII codes.
Make sure to print exactly one space between the character and it’s code.
Example:
$ ./test-ascii
Input: Cat :3 Dog

C 67
a 97
t 116
  32
: 58
3 51
  32
D 68
o 111
g 103

Hint:
When you are printing a value of type char on the screen, it is normally shown as a symbol. To print it as a number (as its ASCII code), type cast it to integer:
cout << (int)c;
*/

#include <iostream>
#include <string>
//#include <cctype>
using namespace std;
int main(){
    string s;
    cout << "Enter text: " << endl;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        char c = s.at(i);
        cout << s.at(i) << " " << int(c) << endl;
    }
}


/*
Notes:
- ASCII table contains every character in English language
- char functions. look them up
- Use s.size() for the length of strings
- Read about string inequalities in strings. Ex; "aa" > "ab"
- s[i] is a char type
- From project 1, you know cin will stop when it runs into a space. So use getline(cin, text);
- use s.size() rather than s.length(). It's better

How Lab A was done in lab:

#include <iostream>
#include <cctype>       //contains some useful functions for 'char' tyoe
#include <string>       //contains some useful function for 'string' type
using namespace std;

int main(){
    string text;
    cout << "Enter text: " << endl;
    getline(cin, text);
    for(int i = 0; i < text.size(); i++){
        cout << text[i] << " " << (int)text[i] << endl;
    }
    return 0;
}
*/
