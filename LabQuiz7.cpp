//Mohammad Hossain
//Instructor: Minh Nyugen
//labquiz7.cpp
//Define a function intmax3(int a, int b, int c) that
//returns the maximum of a,b, and c.
#include <iostream>
using namespace std;

int max3(int a, int b, int c);

int main(){
    int x,y,z;
    cout << "Enter first number: " << endl;
    cin >> x;
    cout << "Enter second number: " << endl;
    cin >> y;
    cout << "Enter third number: " << endl;
    cin >> z;
    cout << "Largest number is " << max3(x, y, z) << endl;
}

int max3(int a, int b, int c){
    int largest;
    if(a > b and a > c){
        largest = a;
    }
    else if(b > a and b > c){
        largest = b;
    }
    else if(c > a and c > b){
        largest = c;
    }
}