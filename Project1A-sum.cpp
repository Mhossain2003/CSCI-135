/*
Mohammad Hossain
project 1A : Adding integers
sum.cpp
Write a program sum.cpp that reads a sequence of integers from cin, and reports their sum.
Task A: Adding Integers
*/

#include <iostream>
using namespace std;
int main()
{
    float num;
    float total;
    while(cin >> num)
    {
        total += num;
    }
    cout << total << endl;
    return 0;
}

/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int num = 0;
    int total = 0;
    char file;
    char add == "+";
    char sub == "-";

    while(cin >> file)
    {
        if(file == "+" || file == "-")
        {
            if(add == "+")
            {
                num += total;
            }
            else if(add ++ "-")
            {
                num -= total;
            }
        }
*/