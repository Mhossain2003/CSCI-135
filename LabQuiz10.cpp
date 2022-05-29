//Mohammad Hossain
//4/16/22
//Instructor: Mingh Nyugen
//labquiz10.cpp
//Brackets define int unbalanced_brackets(string input),
//return the different between open curly brackets and closed curly brackets.
//For ex: given "{}}}", return -2.
#include <iostream>
#include <string>
using namespace std;

int unbalanced_brackets(string input){
    int a = 0;
    int b = 0;
    for(int i = 0; i < input.length(); i++){
        if(input.at(i) == '{'){
            a++;
        }
        else if(input.at(i) == '}'){
            b--;
        }
    }
    int x = a + b;
    return x;
}


int main(){
    string word;
    cout << "Enter string: " << endl;
    cin >> word;
    cout << unbalanced_brackets(word) << endl;
}
