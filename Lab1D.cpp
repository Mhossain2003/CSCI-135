/*
Mohammad Hossain
CSCI-136
Minh Nguyen
Lab1D
month.cpp

This program will asks the user to input the year and the month (1-12) 
and prints the number of days in that month (taking into account leap years).
You may not use switch case or arrays even if you know these language constructs.
*/
#include <iostream>
using namespace std;

int main ()
{
    int year;
    int month;
    cout << "Enter year: " << endl;
    cin >> year;
    cout << "Enter month: " << endl;
    cin >> month;
    
    if (month == 2){
        if (year % 4 != 0){
            cout << "28 days" << endl;
        }
        else if (year % 100 != 0){
            cout << "29 days" << endl;
        }
        else if (year % 400 != 0){
            cout << "28 days" << endl;
        }
        else{
            cout << "29 days" << endl;
        }
    }    
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "31 days" << endl;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11){
        cout << "30 days" << endl;
    }
    
    return 0;
}