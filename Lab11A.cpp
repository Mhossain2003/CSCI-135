/*
Mohamamd Hossain
Course: CSCI-136
Instructor: Minh Nyugen
Assignment: Lab 11A: Introducing Object oriented programming
social.cpp

Here, briefly, at least in one or a few sentences
describe what the program does.

Notes:
Monolithic code is one file -> Functions are one file -> Classes(contain functions and vars) also one file -> Multiple Files are easier to manage multiple teams...
you don't have to run everything to test your apps/softwares

class Student
private:        //can be manipulated/ called within this class
    int id;     //member variable
    string name;    //member variable

public:         //Can be called/manipulated from outside
    int lookup(strin_name);     //member functions
*/
#include <iostream>
using namespace std;

class Profile {
private:   //Privtate memebers of a class can only be called by the member functions of that class. Orivate members usually are member variables, but it can be member functions,
           //depends on the purpose and design of your class.
    string username;
    string displayname;
public:     //Public members of a class can be called from outside. Public members are usually member functions. Can be member variables though(rare).
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername(){
        return username;
    }
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

//There are two ways to define member functions of a class.
//First way: you can define them directly inside the class.
//Second way: you can prototypes inside the class and define them later.
//When do it the second way, you have to let the computer knows that you are defining a function of a particular class.
int main(){
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}
//Default Profile constructor (username = "", displayname = "")
Profile::Profile(){
    username = "";
    displayname = "";
}

//profile constructor for a user (initializing private variable username = usrn, displayname)
Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}

//Change display name to dspn:
void Profile::setDisplayName(string dspn){
    displayname = dspn;
}

string Profile::getFullName(){
    return displayname + " (@" + username + ")";
}