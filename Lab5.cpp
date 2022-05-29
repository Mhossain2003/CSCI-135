/*
Mohammad Hossain
Professor: Mingh Nyugen
Date: 3/7/22
THIS IS LAB 5
numbers.cpp
Write a program numbers.cpp that defines a function
bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.
*/
#include <iostream>
#include <cmath>
using namespace std;
//Function Prototype
//Part A
bool isDivisibleBy(int n, int d);       //a function prototype, if you have a prototype
                                        //the function anywhere you want
                                        // Function protype sevres like a list of function
                                        //if you dont use function protype, you got to define the function here.
//Part B
bool isPrime(int n);
//Part C
int nextPrime(int n);
//Part D do as HW
int countPrimes(int a, int b);
//Part E
bool isTwinPrime(int n);
//part F: do as hw, very similar to part C
int nextTwinPrime(int n);
//Part G:
int largestTwinPrime(int a, int b);


int main()
{
    //you got to define the function isDivisbleBy before the main function
    //except you use function prototype
    //cout << isDivisibleBy(6, 3) << endl;                      //Part A
    //cout << isPrime(1) << endl;                               //part B
    //cout << nextPrime(14) << endl;                            //Part C
    //cout << nextPrime(17) << endl;                            //Part C
    //cout << countPrimes(1, 20) << endl;                       //Part D
    //cout << isTwinPrime(17) << endl;                          //Part E
    //cout << nextTwinPrime(323) << endl;                       //Part F
    //cout << largestTwinPrime(5, 18) << endl;                  //part G

}

//define the function
//Part A
bool isDivisibleBy(int n, int d){
    if(d == 0) return false;
    //the function returns false and ends right there. WILL NOT GO TO SECOND IF
    //If it goes here, meaning it did NOT return false above,
    if(n % d == 0)  // check the remainder
        return true;
    //if n%d == o, it will return true and ends right there.
    //It will NOT go to return false below
    return false;
    //In a function in all programming languages, if return happens, the function ends right there, doesn't go any further.
    //Thats why, if you use if + return, you dont use e;se, b/c of the reason stated above.
    //But more IMPORTANT, you want to make sure that the function actually returns something at the end (with no if attached to it)
    //When you write a function that needs to return something, make sure the last return is not in an 'if'
    }
//Part B
bool isPrime(int n){
    //for(int i = 2; i < n-1; i++)
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;    //IF we found a number that n is divisible by 
                             //Between 2 and n-1, then we can return false, so we don't need to check further
                             //return false right away and ends the function 
    //after the for loop, of we coild not find any number between 2 and n-1 that n is divisible, then we can say it's a prime number:
    return true;
}
//Part C:
    //Keep the increment n by 1 until you found a prime number, then stop
    //ex: 14 >> 15 >> 16 >> 17 >>18 >> 19 ....stops at 19 because 19 is a prime #
    //But because even numbers cannot be prime, so we can modify our code to increment by 2 instead of 1 (make it run faster).
int nextPrime(int n){
    //lets try incrementing by 1:
    int nplus = n + 1;      //we dont want to mess up n, so we declare nplus instead of n++
    while(!isPrime(nplus))  //while nplus is not a prime number by using isPrime() function from part B
        nplus++;
    //The while loop will stop if nplus is a prime number, and that should be answer
    return nplus; 
    /*
    //to increment by 2
    if(n < 2) return 2;
    int nplus;
    if(n%2 == 0; nplus = n+1)  
    else nplus = n+2;
    while(!isPrime(nplus))
        nplus += 2;
    return nplus;
    */
}
//Part D:
int countPrimes(int a, int b){
    int count = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            count += 1;
        }
    }
    return count;
}
//Part E:
bool isTwinPrime(int n){
    /*
    if(isPrime(n) and (isPrime(n-2) or isPrime(n+2)))
        return true;
    return false;
    */
   //check if n is a prime and n-2 or n+2 is also a prime
    return isPrime(n) and (isPrime(n-2) or isPrime(n+2));
}
//part F:
int nextTwinPrime(int n){
    int nplus = n + 1;      //we dont want to mess up n, so we declare nplus instead of n++
    while(!isTwinPrime(nplus))  //while nplus is not a prime number by using isPrime() function from part B
        nplus++;
    //The while loop will stop if nplus is a prime number, and that should be answer
    return nplus; 
}
//Part G:
int largestTwinPrime(int a, int b){
    //B/c we need to find the bigges ttwin prime numner in that range
    //why don't we for loop from upper bound to lower bound
    //The first twin prime number you find should be the biggest one and the we stop.
    for(int i = b; i >= a; i--)
        if(isTwinPrime(i))
            return i;
        return -1;
}



