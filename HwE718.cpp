//Mohammad Hossain
//Instructor: Minh Nyugen
//4/14/22
//HW E7.18 - Triangle Perimeter
//Prompt: Define a structure Triangle that contains three Point members.
//Write a function that computes the perimeter of a Triangle.
//Write a program that reads the coordinates of the points, calls your function,
//and displays the result.
#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

struct Triangle
{
    Point a;
    Point b;
    Point c;
};

//Prototype of function that computes perimeter of a triangle
double perimeter(Triangle t);
double distance(Point a, Point b);


int main(){
    Triangle one;
    cout << "Enter first point: " << endl;
    cin >> one.a.x >> one.a.y;
    cout << "Enter second point: " << endl;
    cin >> one.b.x >> one.b.y;
    cout << "Enter third point: " << endl;
    cin >> one.c.x >> one.c.y;

    cout << "The perimeter is: " << perimeter(one) << endl;
    return 0;
}

double distance(Point a, Point b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

double perimeter(Triangle t){
    double p;
    p = sqrt(pow(t.b.x - t.a.x, 2) + pow(t.b.y - t.a.y, 2)) + sqrt(pow(t.c.x - t.b.x, 2) + pow(t.c.y - t.b.y, 2)) + sqrt(pow(t.a.x - t.c.x, 2) + pow(t.a.y - t.c.y, 2));
    return p;
}