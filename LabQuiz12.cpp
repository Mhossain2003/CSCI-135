//Mohammad Hossain
//4/23/22
//labquiz12.cpp
//Money Define class Money with public int data members dollars
//and cents. Define NON member function Money add_money(Money x, Money y)
//where cents of added result is <100.
#include <iostream>
using namespace std;

class Money{
    public:
        int dollars, cents;
};

Money add_money(Money x, Money y){
    int cents = x.cents + y.cents;
    int dollars = x.dollars + y.dollars;
    dollars += cents / 100; //to turn everything to dollars
    return{dollars, cents % 100};   //{} initializer
}
