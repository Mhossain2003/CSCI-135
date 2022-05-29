/*
Mohammad Hossain
Professor: Mingh Nyugen
Date: 3/14/22
LAB6C
vigenere.cpp
Write a program vigenere.cpp. It should contain a function encryptVigenere implementing this cipher:

string encryptVigenere(string plaintext, string keyword);
You may assume that the keyword contains only lowercase alphabetic characters a - z.

The main should implement a testing interface similar to the one in Task B, the user enters the plaintext and the keyword, and the program reports the ciphertext.

Example:
$ ./vigenere

Enter plaintext: Hello, World!
Enter keyword  : cake
Ciphertext     : Jevpq, Wyvnd!
*/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
//prototype
string encryptVigenere(string plaintext, string keyword);
string encryptCaesar(string plaintext, int rshift);
char shiftChar(char c, int rshift);

int main(){
    /*
    cout << "Enter plaintext: " << endl;
    getline(cin, plaintext);
    cout << "Enter keyword: " << endl;
    cin >> keyword;
    cout << encryptVigenere(plaintext, keyboard) << endl;    
    */
   cout << encryptVigenere("Hello, World!", "cake") << endl;

}

string encryptVigenere(string plaintext, string keyword){
    string ans;      //by default, this is an empty string.
    int j = 0;      //index for the keyword.
    for(int i = 0; i < plaintext.size(); i++){
        ans += shiftChar(plaintext[i], keyword[j] - 'a');
        if (isalpha(plaintext[i])) j++;
        if(j == keyword.size()) j = 0;      //reset the keyword
    }
    return ans;
}
char shiftChar(char c, int rshift){
    //Convert the ASCII order to alphabetical order first by subtracing 'a' or 'A':
    //if c is a lowercase character, c - 'a' will return its alphabetical order with 0 indexed (0 - 25):
    if(islower(c))            //if c is lower case
        return (c - 'a' + rshift) % 26 +'a';      //Convert c to alphabetical order (c - 'a') and plus rshift for shifting 'rshift; down the alphabet. %26 deals with wra[ around
    if(isupper(c))
        return (c - 'A' + rshift) % 26 +'A';
    //for other special characters: we can keep it the same by returning c;
    return c;
}

string encryptCaesar(string plaintext, int rshift){
    //we already have a shiftChar function to deal with one character.
    //We can apply 
    string ans;      //by default, this is an empty string.
    for(int i = 0; i < plaintext.size(); i++)
        ans += shiftChar(plaintext[i], rshift);
    return ans;
}

