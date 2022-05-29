//Name:  Mohammad Hossain
//Email:  Mohammad.hossain47@myhunter.cuny.edu
//Date:  March 1 2022
//E 3.5 - Increasing, Decreasing, or Neither
//Write a program that reads three numbers and prints “increasing” if they are in 
//increasing order, “decreasing” if they are in decreasing order, and “neither” 
//otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its 
//predecessor. The sequence 3 4 4 would not be considered increasing

#include <iostream>
using namespace std;

int main(){
    int first;
    int second;
    int third;
    cout << "Enter first number:  " << endl;
    cin >> first;
    cout << "Enter second number:  " << endl;
    cin >> second;
    cout << "Enter third number:  " << endl;
    cin >> third;

    if(first < second and second < third){
        cout << "Increasing" << endl;
    }
    else if(first > second and second > third){
        cout << "Decreasing" << endl;
    }
    else{
        cout << "Neither" << endl;
    }
    return 0;
}