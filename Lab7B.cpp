/*
Mohammad Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Lab7B
indent.cpp

Write a new program indent.cpp that enhances the program from the previous task. As it reads the input line by line, 
it should also count the number of open and closed { } in it, and keep track of how many blocks is currently open at the beginning of each line.
*/
#include <iostream>
#include <cctype>
using namespace std;

//prototype
string removeLeadingSpaces(string line);
int countChar(string line, char c);
void indent();

int main(){
    indent();
}
void indent(){
    int open_curly = 0, closed_curly = 0, open_blocks;
    string line;
    while (getline(cin, line)){
        //remove the leading spaces
        line = removeLeadingSpaces(line);
        int open_blocks = open_curly - closed_curly;
        //check the first character for '}'
        if(line[0] == '}' and open_blocks > 0) open_blocks--;
        //print out the number of tabs before printing out the string:
        for(int i = 0; i < open_blocks; i++)
            cout << '\t';
        cout << line << endl;
        open_curly += countChar(line, '{');
        closed_curly += countChar(line, '}');
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
int countChar(string line, char c){
    int ans = 0;
    for(int i = 0; i < line.size(); i++)
        if(line[i] == c)
            ans++;
    return ans;
}

