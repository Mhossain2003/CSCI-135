/*
Mohammd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: checkerboard.cpp
Lab4B
 
Write a program checkerboard.cpp that asks the user to input width and height and prints
a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
*/
#include <iostream>
using namespace std;
int main(){
    int width;
    int height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: " << endl;
    cin >> height;
    //using a nested for loop
    for(int row=0; row < height; row++){
        for(int col=0; col < width; col++){
            if((row+col)%2 == 0){    //row and col are odd and even at the same time
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