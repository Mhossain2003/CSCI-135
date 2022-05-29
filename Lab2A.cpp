/*
Mohammad Hossain
Course: CSCI-136
Instructor: Minh Nguyen
Assignment:Lab2A
valid.cpp
Task A: Input Validitation

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int s;
    cout << "Enter a number in between 0 and 100: " << endl;
    cin >> n;
    while(n < 0 || n == 0 || n > 100 || n == 100)
    {
        cout << "Re-enter a valid number: " << endl;
        cin >> n;
    }
    s = n*n;
    cout << s << endl;
    return 0;
}