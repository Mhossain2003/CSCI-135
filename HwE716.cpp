//Mohammad Hossain
//Instructor: Minh Nyugen
//4/14/22
//HW E7.16 - Point Distance
//Prompt: Define a structure Point. A point has an x and a y coordinate.
//Write a function double distance(Point a, Point b) that computes
//the distance from a to b. Write a program that reads the coordinates
//of the points, calls your function, and displays the result.
#include <iostream>
#include <cmath>
using namespace std;


struct Point
{
    double x;   //x-coordinate
    double y;   //y-coordinate. X and Y are the members of the data structure
};

//prototype
double distance(Point a, Point b);


int main(){
    Point one, two;
    cout << "Enter x and y of point one: " << endl;
    cin >> one.x >> one.y;
    cout << "Enter x and y of point two: " << endl;
    cin >> two.x >> two.y;

    cout << "The distance from point one to point two is: " << distance(one, two) << endl;
    return 0;
}

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

/*
Structs are by defualt public
Classes are by default private
Struct and class are very similar in c++, same thing essentialy
Inside of a struct definition, there are variables
*/
