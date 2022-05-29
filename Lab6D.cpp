/*
/*
Mohammad Hossain
Professor: Mingh Nyugen
Date: 3/14/22
LAB6D
decryption.cpp
Implement two decryption functions corresponding to the above ciphers. When decrypting ciphertext, ensure that the produced decrypted string is equal to the original plaintext:

decryptCaesar(ciphertext, rshift) == plaintext
decryptVigenere(ciphertext, keyword) == plaintext
Write a program decryption.cpp that uses the above functions to demonstrate encryption and decryption for both ciphers.

It should first ask the user to input plaintext, then ask for a right shift for the Caesar cipher and report the ciphertext 
and its subsequent decryption. After that, it should do the same for the Vigenere cipher.
For d( decrpytion, write a function that reverse what the shiftChar function did)
You can call this function shiftLeft or unShift, but basically reverse.
Apply unShift function to the decryption, similar to the encryption functions.
Still use the other functions from vigenere program, but add unShift function...
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

//prototypes
string encryptVigenere(string plaintext, string keyword);
string encryptCaesar(string plaintext, int rshift);
char shiftChar(char c, int rshift);
string decryptCaesar(string ciphertext, int rshift);
string decryptVigenere(string ciphertext, string keyword);

int main(){

    //cout << "Enter plaintext: " << endl;
    //getline(cin, plaintext);
    //cout << "Enter keyword: " << endl;
    //cin >> keyword;
    //cout << encryptVigenere(plaintext, keyboard) << endl;    
    //cout << encryptVigenere("Hello, World!", "cake") << endl;
    cout << decryptCaesar("Rovvy, Gybvn!", 10) << endl;
    cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << endl;

}
char shiftChar(char c, int rshift){
    //(char)(c + rshift);
    int length = 26;
    if (c >= 'a' && c <= 'z'){
        return ((c - 'a' + rshift + length) % length + 'a');
        }
        else if (c >= 'A' && c <= 'Z'){
            return ((c - 'A' + rshift + length) % length + 'A');
        }
        else{
            return c;
        }
}
string encryptCaesar(string plaintext, int rshift){
    //we already have a shiftChar function to deal with one character.
    //We can apply 
    string ans;      //by default, this is an empty string.
    for(int i = 0; i < plaintext.size(); i++)
        ans += shiftChar(plaintext[i], rshift);
    return ans;
}
string decryptCaesar(string ciphertext, int rshift){
    string x;   //empty string ""
    for(int i = 0; i < ciphertext.size(); i++)
        if(isalpha(ciphertext[i])){
            x += shiftChar(ciphertext[i], -rshift);
        }
        else{
            x += ciphertext[i];
        }
    return x;
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
string decryptVigenere(string plaintext, string keyword){
    string z;   //empty string
    int k = 0;   //index for keyword
    int index = 0;
    for(int i = 0; i < plaintext.size(); i++){
        z += shiftChar(plaintext[i], -(keyword[k] - 'a'));
        char c = plaintext[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            k++;
        }
        if(k == keyword.length()){
            k = 0;
        } 
    }
    return z;
}
/*
int index = -1;
while(ciphertext[++index]){
        x += shiftChar(ciphertext[index], -rshift);
    }
    return x;



int index = -1;
    for(int i = 0; i < plaintext.size(); i--){
        z += shiftChar(ciphertext[i]);
    }
    return z;

string encryptVigenere(string plaintext, string keyword){
    string ans;      //by default, this is an empty string.
    int j = 0;      //index for the keyword.
    for(int i = 0; i < plaintext.size(); i++){
        ans += shiftChar(plaintext[i], keyword[j] - 'a');
        if (isalpha(plaintext[i])) j++;
        if(j == keyword.size()) j = 0;      //reset the keyword
    }
    return ans;

*/
/*
string decryptVigenere(string plaintext, string keyword){
    string x;
    int j = -1;
    int index = -1;
    while(plaintext[++j]){
        if(isalpha(plaintext[j])){
            x += shiftChar(plaintext[j], -rshift())
        }
    }
}
/*
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
string decryptVigenere(string plaintext, string keyword){
    string z;   //empty string
    int k, index = 0;   //index for keyword
    for(int i = 0; i < plaintext.size(); i++){
        z += shiftChar(plaintext[i], -(keyword[k] - 'a'));
        char c = plaintext[i];
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            index++;
        }
        if(index == keyword.length()){
            index = 0;
        } 
    }
    return z;
}
string decryptCaesar(string ciphertext, int rshift){
    string x;
    int index = -1;
    while(ciphertext[++index]){
        x += shiftChar(ciphertext[index], -rshift);
    }
    return x;
}
*/