/*
Mohammad Hossain
Instructor: Minh Nyugen 
5/10/22
lab13
recursion.cpp
Task A. Print all numbers in range
Write a program recursion.cpp, defining a function

void printRange(int left, int right);
that prints all numbers in range left ≤   x   ≤ right, separated by spaces. (Don’t use loops, global or static variables.)
A usage example:
int main() {
    printRange(-2, 10);
}
Will print:
-2 -1 0 1 2 3 4 5 6 7 8 9 10
When left > right, the range is empty and the program should not print any numbers.
*/
#include <iostream>
#include <string>
using namespace std;

void printRange(int left, int right);   //Part A
int sumRange(int left, int right);      //Part B
int sumArray(int *arr, int size);       //Part C
bool isAlphanumeric(string s);          //Part D
bool nestedParens(string s);            //Part E

/*
int main() {
    printRange(-2, 10);     //will print: -2 -1 0 1 2 3 4 5 6 7 8 9 10
}
*/

void printRange(int left, int right){
    if(left <= right){
        cout << left << endl;
        printRange(left + 1, right);
    }
}

/*
Task B. Sum of numbers in range
In the same program recursion.cpp, add a function

int sumRange(int left, int right);
that computes the sum of all numbers in range left ≤   x   ≤ right. (Don’t use loops, global or static variables.)

A usage example:

int main() {
    int x = sumRange(1, 3);
    cout << This is << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << That is << y << endl;   // 52
}
What makes it different from the previous example, this function has to return the answer:

if the range is empty, the sum is zero.
Otherwise sum(left, right) = left + sum(left + 1, right).
*/
/*
int main() {
    int x = sumRange(1, 3);
    cout << "This is " << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << "That is " << y << endl;   // 52
}
*/
int sumRange(int left, int right){
    if(left > right){   //Base case 1: Empty range.
        return 0;
    }
    if (left == right){
        return left;
    }
    return left + sumRange(left + 1, right);
}

/*
Task C. Sum of elements in array
In the same program, add a new function

int sumArray(int *arr, int size);
which receives an array (as a pointer to its first element) and the size of the array, and should return the sum of its elements. The function itself should not do any new dynamic memory allocations.

There are several approaches to this task:

One possible strategy is to define a helper function
sumArrayInRange(int *arr, int left, int right);
which adds up all elements of the passed array, but only for indexes in the interval left ≤ i ≤ right. It can be implemented very similarly to the function sumRange, but it should be adding the elements of the array instead of range indices.
Then sumArray(arr, size) can be defined as
sumArrayInRange(arr, 0, size-1).

Alternatively, can you maybe get away with just using the original function?
A usage example:

int main() {

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it
}
*/
/*
int main() {

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it
}
*/
/*
int sumArray(int *arr, int size){
    if(size == 1){
        return arr[0];
    }
    return arr[size - 1] + sumArray(arr, size - 1);
}
*/
/*
Task D. Is string alphanumeric?
In the same program, add a new function

bool isAlphanumeric(string s);
which returns true if all characters in the string are letters and digits, otherwise returns false.

A usage example:

cout << isAlphanumeric("ABCD") << endl;        // true (1)
cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
The logic is similar to the sumRange function:

if the sting is empty, return true.
Otherwise,
check the first character, and
check that the rest of the string is alphanumeric.
You may use the string function substr(pos, len), which extracts a substring. It takes two parameters, the starting position and the length of the substring. For example:

string msg = "ABCDEFGH";
cout << msg.substr(2, 4);   // CDEF (start at char [2] and
                            //       take 4 characters)
*/
/*
int main(){
    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0) 
}
*/

bool isAlphanumeric(string s){
    if(s.length() == 0){
        return true;
    }
    if(!isalpha(s[0]) and !isdigit(s[0])){
        return false;
    }
    return isAlphanumeric(s.substr(1, s.length() - 1));
}

int main(){
    cout << nestedParens("((()))") << endl;      // true (1)
    cout << nestedParens("()") << endl;          // true (1)
    cout << nestedParens("") << endl;            // true (1)

    cout << nestedParens("(((") << endl;         // false (0)
    cout << nestedParens("(()") << endl;         // false (0)
    cout << nestedParens(")(") << endl;          // false (0)
    cout << nestedParens("a(b)c") << endl;       // false (0)
}

//task E
bool nestedParens(string s){
    if(s.length() == 0){
        return true;
    }
    if(s.length() % 2 == 1 or !(s[0] == '(' and s[s.length() - 1] == ')')){
        return false;
    }
    return nestedParens(s.substr(1, s.length() - 2));
}