//Mohammad Hossain
//Professor: Mingh Nyugen
//Date: 3/6/22
//Homework E4.8 - 1 Character Per Line
//Write a program that reads a word and prints each character of the word on a 
//separate line. For example, if the user provides the input "Harry", the program prints
//H
//a
//r
//r
//y

#include <iostream>
#include <string>           //This library will gurantee the functions of strings such as .length()
using namespace std;
int main()
{
    string word;
    cout << "Enter word: " << endl;
    cin >> word;
    for(int i = 0; i < word.length(); i++)       // .length() is used to get the length of a string
    {
        cout << word.at(i) << endl;             //.at() used to get a character in a string
    }
    return 0;
}