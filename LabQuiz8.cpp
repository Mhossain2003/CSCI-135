//Mohammad Hossain
//Instructor: Minh Nyugen
//labquiz8.cpp
//Define the function void remove_e(string &sentence);
//Removes all 'e' characters from the original string
#include <iostream>
#include <string>
using namespace std;

void remove_e(string & sentence){
    string word = "";
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] != 'e'){
            word += sentence[i];
        }
    }
    sentence = word;
}