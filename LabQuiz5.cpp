//Mohammad Hossain
//4/2/22
//Lab Quiz 5:
//Reading files: open and read a file called 'data.txt', which contains lines of text with names of colors and their RGB values, like this:
//red FF0000... etc. Read and print each line. Close the file after processing it.
#include <iostream>
#include <string>
#include <fstream>      //this stream is used to read and write from and to files. <ifstream> is used only to read from files
using namespace std;

int main(){
    ifstream file("data.txt");
    string x;
    while(file >> x){
        cout << x << endl;
    }
    file.close();
}