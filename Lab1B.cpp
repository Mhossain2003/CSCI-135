/*
Mohammad Hossain
CSCI-136
Minh Nguyen
Lab1B
smaller3.cpp

This program will find the smaller of three integers.
Will ask the user to input 3 integer numbers and prints out smaller of the three
*/
#include <iostream>
using namespace std;

int main ()
{
    int x;
    int y;
    int z;
    int a;
    cout << "Enter first number: " << endl;
    cin >> x;
    cout << "Enter second number: " << endl;
    cin >> y;
    cout << "Enter third number: " << endl;
    cin >> z;  
    if (x < y)
    {
        a = x;
    }
        else if (x > y)
        {
            a = y;
        }
    if (a < z)
    {
        cout << "The smaller of the three is: " << a << endl;
    }
        else if (a > z)
        {
        cout << "The smaller of the three is: " << z << endl;
        }
    return 0;
}