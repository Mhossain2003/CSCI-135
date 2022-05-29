/*
Mohammad Hossain
Professor: Mingh Nyugen
Date: 3/14/22
LAB6B
Write a program caesar.cpp with functions implementing Caesar cipher encryption:

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);
The argument rshift is the magnitude of the right shift. 
For the sake of the lab, you may assume it to be in the range 0 ≤ rshift ≤ 25 (although, implementing it correctly for an arbitrary integer shift is also possible, of course).

Your functions should preserve case, and any non-alphabetic characters should be left unchanged. For example,

encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!"
Feel free to write more additional helper functions when you need them.

The main function should ask the user to input a plaintext sentence, then enter the right shift, and report the ciphertext computed using your encryption function.

Example:
$ ./caesar

Enter plaintext: Hello, World!
Enter shift    : 10
Ciphertext     : Rovvy, Gybvn!
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// A helper function to shift one character by rshift
//prototype
char shiftChar(char c, int rshift);

// Caesar cipher encryption
//prototype
string encryptCaesar(string plaintext, int rshift);

int main(){
    cout << encryptCaesar("Way to go!", 5) << endl;
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

/*
Notes:
-islower() and isupper() are char functions that are included in the <cctype>
*/