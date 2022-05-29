//Name:  Mohammad Hossain
//Email:  Mohammad.hossain47@myhunter.cuny.edu
//Date:  March 1 2022
//E 3.1 - Positive, or Zero, or Negative
//Write a program that reads an integer and prints whether it is +, -, or 0

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter integer: " << endl;
    cin >> num;
    if(num > 0){
        cout << "Positive" << endl; 
    }
    else if(num < 0){
        cout << "Negative" << endl;
    }
    else{
        cout << "Zero" << endl;
    }
    return 0;
}