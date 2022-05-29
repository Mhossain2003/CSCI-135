/*
Mohammd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: lower.cpp
Lab4D

Write a program lower.cpp that prints the bottom-left half of a square, 
given the side length.

Example:
Input side length: 6
 
Shape:
*
**
***
****
*****
******
*/
#include <iostream>
using namespace std;
int main(){
    int length;
    cout << "Input side length: " << endl;
    cin >> length;

    for(int row=0; row < length; row++){
        for(int col=0; col < length; col++){
            if(col <= row){ 
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