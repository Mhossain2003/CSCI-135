//Mohammad Hossain
//Professor: Mingh Nyugen
//Date: 3/9/22
//Homework E5.14 - Sort 2
//Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is
//greater than b and otherwise leaves a and b unchanged. For example,
//int u = 2;
//int v = 3;
//int w = 4;
//int x = 1;
//sort2(u, v); // u is still 2, v is still 3
//sort2(w, x); // w is now 1, x is now 4
#include <iostream>
using namespace std;

void sort2(int& a, int& b){         //The ampersand symbol & is used in C++ as a reference declarator in addition to being the address operator. The meanings are related but not identical. 
                                    //If you take the address of a reference, it returns the address of its target.
    if(a > b)
    {
        int var = a;
        a = b;
        b = var;
    }
    else
    {
        a = a;
        b = b;
    }
}
/*
int main(){
    sort2(2, 3);
}
*/
