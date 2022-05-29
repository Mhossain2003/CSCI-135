/*
Mohamamd Hossain
Course: CSCI-136
Instructor: Minh Nyugen
Assignment: Lab 12: Vectors
lab12A
vectors.cpp
Notes:

Initialization:
#include <vector>
vector<int> v; // creates a vector of int called v

For all intents and purposes, think of a vector as an array that can resize itself. 
In practice, this means we do not need to specify a size when creating a vector. 
To add an element to a vector, use the push_back(element) method, where element is a value of the same type as the vector. Example:

vector<int> v;     
v.push_back(10); 
v.push_back(20); 
v.push_back(30);

// v now contains elements [10, 20, 30]

Vectors can also be initialized with list initialization syntax. 
The same vector could have been created as follows:

vector<int> v{10, 20, 30};
// v now contains elements[10, 20, 30]

Element Access:

To access an element, use the same reference operator used with arrays [ ]. 
In the above example, v[1] would return the value 20 as an int.
at(i) returns a reference to the element at position i (zero-indexed) in the vector.
front()returns a reference to the first element in the vector.
back() returns a reference to the last element in the vector.


Size vs Capacity:
The size of a vector is the number of elements in the vector. 
The capacity of a vector is the storage space currently allocated to the vector. As such,
size() returns the number of elements in the vector.
capacity() returns the number of elements the vector can hold before more memory must be allocated.
empty() returns true if the size is 0. 
To make this easier to understand, think of the vector as a container, say a bottle. 
A 1L bottle can hold one liter of water, this is its capacity. 
But if it is half full (or half empty for the goths) then its size is half a liter. 
This means that if we want to store more than one liter, we will need a bigger bottle (allocate more memory). 
To test this, create a few vectors, fill them with elements, and check the difference between their size and capacity as the number of elements increase.

Mutators (also known as setters or modifiers):
push_back(n) adds element n at the back (end) of the vector.
pop_back() removes the last element in the vector.
clear() removes all elements from the vector.

Task A: The easy one
A big benefit of vectors is their ability to be returned from functions. 
For this task, program a function called vector<int> makeVector(int n) 
that returns a vector of n integers that range from 0 to n-1. 
Your function must be implemented outside the main function and must return a vector.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n);

int main(){

}

vector<int> makeVector(int n){
    //use for loop and pushback:
    vector<int> x;
    for(int i = 0; i < n; i++)
        x.push_back(i);
    return x;
}

