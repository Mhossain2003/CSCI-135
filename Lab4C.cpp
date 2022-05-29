/*
Mohammd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: cross.cpp
Lab4C
 
Write a program cross.cpp that asks the user to input the shape size,
and prints a diagonal cross of that dimension.
Example:
Input size: 8
Shape:
*      *
 *    *
  *  *
   **
   **
  *  *
 *    *
*      *
*/
#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Input size: " << endl;
    cin >> size;

    for(int row=0; row < size; row++){
        for(int col=0; col < size; col++){
            if(row == col or row+col == size - 1){ 
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