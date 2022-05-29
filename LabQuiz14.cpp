//Mohammad Hossain
//Instructor: Minh Nyugen
//5/6/2022
//labquiz14.cpp
//Vectors Define function vector<int> makeVector(int n) which,
//if n is positive, return a vector of ints 0 to n-1, otherwise,
//return an empty vector
#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    vector<int> x;
    if(n > 0)
        for(int i = 0; i < n; i++)
            x.push_back(i);
    return x;
}
