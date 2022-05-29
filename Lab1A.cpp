//Mohammad Hossain
//CSCI-136
//Minh Nguyen
//Lab1A

//This program will find the smaller of two integers.
//Will ask the user to input 2 integer numbers and prints out smaller of the two

#include <iostream>
using namespace std;

int main ()
{
    int x;
    int z;
    cout << "Enter the first number: " << endl;
    cin >> x;
    cout << "Enter second number: " << endl;
    cin >> z;
    if (x < z)
    {
        cout << "The smaller of the two is: " << x << endl;
    }
    else
    {
        cout << "The smaller of the two is: " << z << endl;
    
    }
    return 0;
}