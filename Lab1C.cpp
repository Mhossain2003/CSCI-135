/*
Mohammad Hossain
CSCI-136
Minh Nguyen
Lab1C
leap.cpp

This program will asks the user to input an integer representing a year number
If the input year is a leap year according to the modern Gregorian calendar, 
it should print Leap year, otherwise, print Common year.*/
#include <iostream>
using namespace std;

int main ()
{
    int year;
    cout << "Enter year: " << endl;
    cin >> year;
    if (year % 4 != 0)
    {
        cout << "Common year" << endl;
    }
    else if (year % 100 != 0)
    {
        cout << "Leap year" << endl;
    }
    else if (year % 400 != 0)
    {
        cout << "Common year" << endl;
    }
    else
    {
        cout << "Leap year" << endl;
    }
    return 0;
}