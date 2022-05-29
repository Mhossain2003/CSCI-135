/*
Mohammd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: upper.cpp
lab4E

Write a program upper.cpp that prints the top-right half of a square, 
given the side length.

Example:
Input side length: 5
 
Shape:
*****
 ****
  ***
   **
    *
*/
#include <iostream>
using namespace std;
int main(){
    int length;
    cout << "Input side length: " << endl;
    cin >> length;

    for(int row=0; row < length; row++){
        for(int col=0; col < length; col++){
            if(col >= row){ 
                cout << "*";
            }
            else{
                cout << " ";
            }
        }    
        cout << endl;
    }
    return 0;
}