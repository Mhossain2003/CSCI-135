/*
Mohamamd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: Lab 9D
poem.cpp
Here, briefly, at least in one or a few sentences
describe what the program does.
*/
#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        delete p;       // <<<< THATS ALL YOU NEED TO ADD FOR PART D

    }
}