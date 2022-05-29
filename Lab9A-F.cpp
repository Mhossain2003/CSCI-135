/*
Mohamamd Hossain
Course: CSCI-136
Instructor: their name
Assignment: Lab 9A
3d-space.cpp
Lab 9 has A-F
F is optional
*/
#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

//Prototypes
double length(Coord3D *p);      //Coord3D *p or Coord3D *p, *q
Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2);   //Read 2 pointers and return a pointer
void move(Coord3D *ppos, Coord3D *pvel, double dt);
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z);
// free memory
void deleteCoord3D(Coord3D *p);

int main() {
    /*
    //Keep in mind, this is the unusual way to pass a ponter to a function.
    //In normal cases, we should not have to use a & operator that much.
    // Part A: Coord3D pointP = {10, 20, 30};      //PointP is stored in memory location.
    //Since we will pass a pointer(address) to the length function
    //In this case, we need to pass the address of pointP
    Part A: 
    cout << length(&pointP) << endl; // would print 37.4166 
    /*
    //Normally, people will do this (dynamic memory)
    Coord3D *pointP = new Coord3D{10, 20, 30};
    cout << length(pointP) << endl;    //Would print 37.4166
    */
    /*
    //PART B:
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther?
    */
    /*
    //PART C:
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
    */
    //PART E:
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
//Part A:
double length(Coord3D *p){
    return sqrt(p->x * p->x + p->y * p->y + p->z * p->z);
}
//Part B:
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) > length(p2)) return p1;
    return p2;
}
//Part C:
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    //x' = x + vel.x * dt;
    //y' = y + vel.x * dt;
    //z' = z + vel.x * dt;
    //Update the position
    //ppos->x is equivalent to (*ppos).x
    ppos->x = ppos->x + pvel->x * dt;
    ppos->y = ppos->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt;
}
//Part D done in poem.cpp
//Part E:
// allocate memory and initialize
//Say you have a 
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *point = new Coord3D{x, y, z};
    return point;
}

// free memory
void deleteCoord3D(Coord3D *p){
    delete p;
}





































/*
POINTERS NOTES:
//Keep in mind swap function is provided for you in c++. Next time you want to swap something, don't need to redefine.
//This is just an example: This function make a becomes b and vice versa.
void swap(int a, int b){    //pass by value (shallow copy)
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 4, b = 10;
    cout << "Before swap: " << "a: " << a << ", b: " << b << endl;
    swap(a, b);
    cout << "After swap: " << "a: " << a << ", b: " << b << endl;
    //By default, pointers is pass by reference

}
*/

