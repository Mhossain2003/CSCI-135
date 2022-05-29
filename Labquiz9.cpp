//Mohammad Hossain
//4/16/22
//Instructor: Mingh Nyugen
//labquiz9.cpp
//Date Define class Date with public data memebers year, month, day
//as int and day_of_week as string. Define printDate(Date *input)
//prints day_of_week, month/day/year. 12/6/2021, Monday, is printed
//"Monday, 12/6/2021".
#include <iostream>
#include <string>
using namespace std;

class Date{
    public:     //called an access specifier
        int year, month, day;
        string day_of_week;
};

void printDate(Date *input){
    cout << input -> day_of_week << ", " << input -> month << "/" << input -> day << "/" << input -> year << endl;  //faster way
}

/*
int main(){
    Date quiz;
    quiz.printDate();
    return 0;
}


void printDate(Date *input){
            cout << "Enter day of the week: " << endl;
            cin >> day_of_week;
            cout << "Enter month, then day, then year: " << endl;
            cin >> month >> day >> year;
            cout << day_of_week << ", " << month << "/" << day << "/" << year << endl;
        }
*/