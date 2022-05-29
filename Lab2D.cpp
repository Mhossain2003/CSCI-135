/*
Mohammad Hossain
Course: CSCI-136
Instructor: Minh Nguyen
Assignment:Lab2D
fibonacci.cpp
Task D. Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13…
Fibonacci numbers is a sequence of numbers that starts with F(0) = 0 and F(1) = 1,
with all the following numbers computed as the sum of two previous ones, F(n) = F(n−1) + F(n−2):

Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/
#include <iostream>
using namespace std;
int main(){
    // make an array
    int fib[60];     //long long is used for 64 bits, so instead of using int, using long long is better in case'scle, so we dont get negative #'s
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
    cout << fib[0] << endl << fib[1] << endl;
    // and all the following ones can be computed iteratively as
    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
    }
}