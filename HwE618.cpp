//Mohammad Hossain
//5/14/22
//Hw E6.18
//Write a function
//vector<int> append(vector<int> a, vector<int> b)
//that appends one vector after another. For example, if a is
//1 4 9 16
//and b is
//9 7 4 9 11
//then append returns the vector
//1 4 9 16 9 7 4 9 11
#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b){
    vector<int> push;
    for(int i = 0; i < a.size(); i++){
        push.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        push.push_back(b[i]);
    }
    return push;
}
