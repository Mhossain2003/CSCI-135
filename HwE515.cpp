//Mohammad Hossain
//Professor: Mingh Nyugen
//Date: 3/9/22
//Homework E5.15 - Sort 3

//Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to
//arrange them in sorted order. For example,
//int v = 3;
//int w = 4;
//int x = 1;
//sort3(v, w, x); // v is now 1, w is now 3, x is now 4
//Hint: Use multiple calls to the sort2 function of Exercise E5.14.

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
    if(a > b)
    {
        int var = a;
        a = b;
        b = var;
    }
}

void sort3(int& a, int& b, int& c){
    sort2(a, b);
    sort2(a, c);
    sort2(b, c);
} 
/*
int main(){
    int a = 3, b = 2, c = 1;
    sort3(a, b, c);
    cout << a << b << c << endl;
    return 0;
}
*/