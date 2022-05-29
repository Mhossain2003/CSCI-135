//Name:  Mohammad Hossain
//Email:  Mohammad.hossain47@myhunter.cuny.edu
//Date:  February 3 2022
//E 2.10

#include <iostream>
using namespace std;

int main ()
{
    float gallon;
    float fuel;
    float price;
    cout << "Enter number of gallons in tank:" << endl;
    cin >> gallon;
    cout << "Enter fuel efficiency in miles per gallon:" << endl;
    cin >> fuel;
    cout << "Enter the price of gas per gallon:" << endl;
    cin >> price;
    float cost = 100/fuel * price;
    float distance = gallon * fuel;
    cout << "The cost per 100 miles is $" << cost << endl;
    cout << "The car can go " << distance << " miles with gas in the tank." << endl;
    return 0;
}