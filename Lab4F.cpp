/*
Mohammd Hossain
Course: CSCI-136
Instructor: Mingh Nyugen
Assignment: trapezoid.cpp
lab4F

Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.
However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!
*/

#include <iostream>
using namespace std;
int main()
{
    int width, height; 

	cout << "Input width: "; 
	cin >> width; 
	cout << "Input height: "; 
	cin >> height; 
	cout << endl; 
	
	int spaces  = 0;
	int stars = width; 

	if (width <= (2*(height - 1))) 
	{
		cout << "Impossible shape!" << endl; 
	} 
    else{
    //if(statement){
        for(int row=0; row < height; row++){  //
                //On each line, print the # of spaces
            for(int col=0; col < spaces; col++){
                cout << " ";
            }
            //Print out the # of stars
            for(int col=0; col < stars; col++){
                cout << "*";
            }
            cout << endl;
            spaces += 1;
            stars -= 2;
        }  
    }
    return 0;
}


/*
#include <iostream>
using namespace std;
int main()
{
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << endl;
    //bool statement = true;

    int spaces = 0, stars = width;
    //if(width-height < width/2){
    //if ((height * 2) - 1 > width){
    //if(width%2 == 0 and height > width/2){
    if(width<=(2*height-1))
    {    
        cout << "Impossibe shape!" << endl;
        //statement = false;
    }
    else{
    //if(statement){
        for(int row=0; row < height; row++){  //
                //On each line, print the # of spaces
            for(int col=0; col < spaces; col++){
                cout << " ";
            }
            //Print out the # of stars
            for(int col=0; col < stars; col++){
                cout << "*";
            }
            cout << endl;
            spaces += 1;
            stars -= 2;
        }  
    }
    return 0;
}
*/