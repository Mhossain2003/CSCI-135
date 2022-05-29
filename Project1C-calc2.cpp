/*
Mohammad Hossain
Project 1C: Calc2: Reading multiple formulas.
calc2.cpp
Write a better version of the calculator, calc2.cpp, that can evaluate multiple arithmetic expressions.
Let’s use the semicolon symbol that must be used at the end of each expression in the input.
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
        //cin >> numbers;
        if(formula == ';')
        {
            cout << total << endl;
            cin >> numbers;
            total = numbers;
        }
        else if(formula == '+')
        {
            cin >> numbers;
            total += numbers;       //add num to the sum...
        }
        else if(formula == '-')
        {
            cin >> numbers;
            total -= numbers;       //subtract sum by num...
        }
    }
    //cout << total << endl;
    return 0;
}

/*
else if(formula == ';')
        {
            //total = total;
            cout << total << endl;
            total += 0;
            formula += '+';
        }

        else if(formula == ';')
        {
            cout << total << endl;
            total = 0;
            cin >> formula;
            cin >> numbers;
            total += numbers;
        }
*/