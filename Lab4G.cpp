/*
Mohammd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: checkerboard3x3.cpp
Lab4G

Write a program checkerboard3x3.cpp that asks the user to input width and height
and prints a checkerboard of 3-by-3 squares. 
(It should work even if the input dimensions are not a multiple of three.)
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
            if((row/3+col/3)%2 == 0){    //row and col are odd and even at the same time
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