/*
Mohammd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: box.cpp
 
Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.
Also, print a line Shape: between user input and the printed shape (to separate input from output).
*/
#include <iostream>
using namespace std;
int main()
{
    int width, height;
    cout << "Enter width: " << endl;
    cin >> width;
    cout << "Enter height" << endl;
    cin >> height;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
        cout << "*";
    }
    cout << endl;    
    }
    return 0;
}