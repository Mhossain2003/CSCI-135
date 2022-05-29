//Mohammad Hossain
//3/30/22
//Instructur: Mingh Nyugen
//Lab quiz 03: Greater of X or Y: Enter 2 integers x and y, print out the value of the bigger number
#include <iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter X: " << endl; 
    cin >> x;
    cout << "Enter Y: " << endl;
    cin >> y;
    
    if(x > y){
        cout << x << endl;
    }
    if(x < y){
        cout << y << endl;
    }
    return 0;
}