/*
int main(){
    int x = 5;
    int y = 8;
    int *p, *q;     //DECLARING 2 POINTERS
    p = &x;         //SETTING P TO ADDRESS OF X
    q = &y;         //SETTING Q TO ADDRESS OF Y
    //cout << p << "and " << q << endl;   //COUT WILL PRINT OUT THE ADDRESSES OF X AND Y, WHICH IS NOW HELD IN POINTERS P AND Q
    //cout << *p << endl;     //WILL COUT 5, MEANING THE DEREFERENCING OPERATOR * RETURNS THE OBJECT, TO WHICH ITS OPERANT POINTS
    //cout << *q << endl;
    y = *p;         //Y IS 8, AND *P IS 5, WHILE P ITSELF IS ADDRESS OF X, AND X IS 5, SO THIS IS CHANGING VALUE OF Y TO *P, WHICH IS 5, SO COUT << Y WILL COUT 5 NOW
    cout << y << endl;
    //x = *q;
    //cout << x << endl;
    *p = 4;
    cout << *p << endl;
}
*/
/*
void work(int x){
    x++;
    cout << &x << endl;
}
*/
//print 1, 10, 100, 1000, 10000, one in a row


#include <iostream>
using namespace std;

int main(){
    cout << "1" << endl;
    cout << "10" << endl;
    cout << "100" << endl;
    cout << "1000" << endl;
    cout << "10000" << endl;
    return 0;
}