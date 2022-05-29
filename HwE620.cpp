//Mohammad Hossain
//5/14/22
//Hw E6.20
//Write a function
//vector<int> merge_sorted(vector<int> a, vector<int> b)
//that merges two sorted vectors, producing a new sorted vector. Keep an index into 
//each vector, indicating how much of it has been processed already. Each time, 
//append the smallest unprocessed element from either vector, then advance the index. 
//For example, if a is
//1 4 9 16
//and b is
//4 7 9 9 11
//then merge_sorted returns the vector
//1 4 4 7 9 9 9 11 16
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector<int> merge;
    for(int i = 0; i < a.size(); i++){
        merge.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        merge.push_back(b[i]);
    }
    sort(merge.begin(), merge.end());
    return merge;
    //set_union(merge.begin(), merge.end());
}