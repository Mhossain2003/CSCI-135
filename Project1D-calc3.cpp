/*
Mohammad Hossain
Project 1D: Calc3: Squares
calc3.cpp
Write an even better calculator program calc3.cpp that can understand squared numbers.
We are going to use a simplified notation X^ to mean X2. For example, 10^ + 7 - 51^ should mean 102 + 7 − 512.
*/

#include <iostream>
using namespace std;
int main()
{
    int numbers = 0;   //for each num in txt file
    int total = 0;     //for the sum of file
    int x;
    char formula;
    char previous;      //to read in the file itself

    cin >> numbers;        //read in nums
    total += numbers;
    while(cin >> formula)
    {
        
        if (formula == '^')
        {
            x = numbers;
            numbers *= numbers;
            if(previous == '-')
            {
                total += x;
                total -= numbers;
            }
            else
            {
                total -= x;
                total += numbers;
            }

            //numbers *= numbers;

            /*
            if(previous == '+')
            {
                total += x;
                //total += numbers;
            }
            else if(previous == '-')
            {
                total -= x;
                //total -= numbers;
            }
            else
            {
                total -= x;
                total += numbers;
            }
            */
        }
        if(formula == '+')
        {
            previous = '+';
            cin >> numbers;
            total += numbers;  
        }
        if(formula == '-')
        {
            previous = '-';
            cin >> numbers;
            total -= numbers;    
        }
        if(formula == ';')
        {
            cout << total << endl;
            cin >> numbers;
            total = numbers;
            previous = ' ';
        }   
    }  
    return 0;
}



/*
#include <iostream>
using namespace std;
int main()
{
    int numbers = 0;   //for each num in txt file
    int total = 0;     //for the sum of file
    char formula;
    char previous = '+';      //to read in the file itself
    //char next = cin.peek();

    cin >> numbers;     //read in nums
    // total += numbers;   //gather nums to total
    while(cin >> formula)
    {
        //cin >> numbers;
        if (formula == '^')
        {
            numbers *= numbers; // square the number
            //total += numbers;
            cin >> formula;
        }
       
        else if(next == '^')
        {
            cin >> formula;
            numbers *= numbers; // square the number
            total += numbers;
        }
        
        //else if(formula == ';')
        else if(previous == ';')
        {
            cout << total << endl;
            cin >> numbers;
            total += numbers;
        }
       // else if(formula == '^'){
         //   numbers = numbers * numbers; //square sum
           // total += numbers;
        //}
        //else if(formula == '+')
        else if(previous == '+')
        {
            cin >> numbers;
            total += numbers;       //add num to the sum...
        }
        //else if(formula == '-')
        else if(previous == '-')
        {
            cin >> numbers;
            total -= numbers;       //subtract sum by num...
        }
        
        *else if(formula == '^'){
            numbers = numbers * numbers; //square sum
            total = numbers;
        }
        
    }
    //cout << total << endl;
    return 0;
}
*/