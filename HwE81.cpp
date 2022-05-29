//Mohammad Hossain
//Professor: Mingh Nyugen
//Date: 3/9/22
//Hw E8.1 - File Writing

//Write a program that carries out the following tasks:
//Open a file with the name hello.txt.
//Store the message “Hello, World!” in the file.
//Close the file.
//Open the same file again.
//Read the message into a string variable and print it.

#include <iostream>
#include <string>
#include <fstream>      //this stream is used to read and write from and to files. <ifstream> is used only to read from files
using namespace std;

int main(){
    //to read anything from a stream, you need to open the stream:
    fstream infile;
    infile.open("hello.txt", ios::out); //ios::out allows output from a stream. this line is opening the file
                                    //you can combine these 2 lines ^^ by writing:
                                    //ifstream infile("hello.txt");
    infile << "Hello, World!";      //the test "Hello, World!" has been inserted into the file
    infile.close();                 //.close() is used to close the file
    infile.open("hello.txt", ios::in);  //ios::in allows input to a stream
    string variable;
    while(getline(infile, variable)){       //getline() is used read data from a file. This line is getting data from infile and storing it into string variable
        cout << variable << "\n";           //prints out "Hello, World!"
    }
    infile.close();
}





/*
To read/write files, you use variables of the stream types:
ifstream for input from plain text files.
ofstream for output to plain text files.
fstream for input and output from binary files.
You must #include <fstream>
*/