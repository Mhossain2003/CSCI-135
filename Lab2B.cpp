/*
Mohammad Hossain
Course: CSCI-136
Instructor: Minh Nguyen
Assignment:Lab2B
print-interval.cpp
Task B. Print all integers from the requested interval.

Write a program print-interval.cpp
that asks the user to input two integers L and U (representing the lower and upper limits of the interval),
and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.

You can use any loop construct to achieve this result,
but the most idiomatic way to do such an iteration in C++ is to use a for loop that starts with a counter variable i = L and keeps iterating while i < U:

How it was done in lab:
int lower, upper;
cout << "Please enter the lower bound: ";
cin >> lower;
cout << "Please enter the upper bound: ";
cin >> upper;
for(int i = lower; i< upper; i++){
    cout << i << " ";
}
cout << endl;
*/
#include <iostream>
using namespace std;
int main()
{
    int L;
    int U;
    int i;
    cout << "Please enter L: " << endl;
    cin >> L;
    cout << "Please enter U: " << endl;
    cin >> U;
    for(int i = L; i < U; i++)
    {
        cout << i << endl;

    }
    return 0;
}

