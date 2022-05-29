
//Mohammad Hossain
//Lab quiz 1: "I love C++"
//Ilovec++.cpp
//for ex: if input is 5, print 5 such lines that print that...


#include <iostream>
using namespace std;
int main()
{
    int num;
    int i;
    cout << "Enter an integer: " << endl;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cout << "I love C++" << endl;
    }
    return 0;
}
