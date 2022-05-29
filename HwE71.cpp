//Mohammad Hossain
//3/29/22
//Homework E7.1- Sort2 Pointer Edition
//Write a function
//void sort2(double* p, double* q)
//that receives two pointers and sorts the values to which they point. If you call
//sort2(&x, &y)
//then x <= y after the call.
#include <iostream>
using namespace std;
//prototype
void sort2(double* p, double* q);

int main(){
    double x, y;
    sort2(&x, &y);
}
void sort2(double* p, double* q){
    double temp = *p;
    if(p > q){
        *p = *q;
        *q = temp;
    }
}

/*
Note to self:
A pointer is an integer, a number, which stores a memory address, that's all. A pointer is just an address.
Types dont matter, a pointer for all types is just that integer that holds that memory place.
& is ampersand
A variable contains a value, but a pointer specifies where a value is located
*/