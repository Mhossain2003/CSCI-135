/*
Mohammad Hossain
project 1B - Calc: A calculator program.
calc.cpp
write a program calc.cpp that reads from the cin a sequence of one or more non-negative integers written to be added or subtracted.
We want to make a simple calculator that can add and subtract integers, 
and will accept arbitrarily long mathematical formulas composed of symbols +, -, and non-negative integer numbers.
*/

#include <iostream>
using namespace std;
int main()
{
    int numbers = 0;   //for each num in txt file
    int total = 0;     //for the sum of file
    char formula;      //to read in the file itself

    cin >> numbers;     //read in nums
    total += numbers;   //gather nums to total
    while(cin >> formula)
    {
        cin >> numbers;
        if(formula == '+')
        {
            total += numbers;       //add num to the sum...
        }
        else if(formula == '-')
        {
            total -= numbers;       //subtract sum by num...
        }
    }
    cout << total << endl;
    return 0;
}
