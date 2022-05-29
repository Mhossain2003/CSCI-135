/*
Mohammad Hossain
Course: CSCI-136
Instructor: Minh Nguyen
Assignment:Lab3D
reverse-order.cpp
Write a program reverse-order.cpp which asks the user to input two dates (earlier date then later date).
The program should report the West basin elevation for all days in the interval in the reverse chronological order (from the later date to the earlier).
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;
int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    string date, earlier, later;
    double eastSt, eastEl, westSt, westEl;

    string date_arr[400]; //1 year =365 so 400 is good
    double westEl_arr[400];
    int index = 0;

    cout << "Enter starting date: " << endl;
    cin >> earlier; 

    cout << "Enter ending date: " << endl;
    cin >> later;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
    { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 
    
        // for example, to print the date and East basin storage:
        // In c++, you can compare strings for inequality
        // Try to learn more about string comparison in c++
        if(earlier <= date and date <= later){
            date_arr[index] = date;
            westEl_arr[index] = westEl;
            index++;
        }        
    }
    for(int i = index-1; i >= 0; i--){
        cout << date_arr[i] << " " << westEl_arr[i] << endl; 
    }
    fin.close();
}