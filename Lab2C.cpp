/*
Mohammad Hossain
Course: CSCI-136
Instructor: Minh Nguyen
Assignment:Lab2C
edit-array.cpp
Task C. Using arrays to store, update, and retrieve numbers

Write a program print-interval.cpp
that asks the user to input two integers L and U (representing the lower and upper limits of the interval),
and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.

You can use any loop construct to achieve this result,
but the most idiomatic way to do such an iteration in C++ is to use a for loop that starts with a counter variable i = L and keeps iterating while i < U:
*/
#include <iostream>
using namespace std;
int main()
{
    int myData[10];
    for(int i = 0; i < 10; i++) myData[i] = 1;
    int idx;
    int val;

    do {
        for(int i = 0; i < 10; i++) cout << myData[i] << " ";
        cout << endl;
        //cout << myData[10] << endl;

        cout << "Input index: " << endl;
        cin >> idx;
        cout << "Input value: " << endl;
        cin >> val;

        if(idx >= 0 and idx < 10) myData[idx] = val;
    } while (idx >= 0 and idx < 10);
    cout << "Index out of range. Exit" << endl;

}

