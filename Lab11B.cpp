/*
Mohamamd Hossain
Course: CSCI-136
Instructor: Minh Nyugen
Assignment: Lab 11B: Introducing Object oriented programming
social2.cpp

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

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
private:
 bool following[MAX_USERS][MAX_USERS];  // friendship matrix:
 // following[id1][id2] == true when id1 is following id2
};

//There are two ways to define member functions of a class.
//First way: you can define them directly inside the class.
//Second way: you can prototypes inside the class and define them later.
//When do it the second way, you have to let the computer knows that you are defining a function of a particular class.

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
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

bool Network::addUser(string usrn, string dspn){
    if(usrn.empty()) return false;
    for(int i = 0; i < usrn.size(); i++)
        if(!isalnum(usrn[i])) return false;

    if(findID(usrn) != -1) return false;

    if(numUsers == MAX_USERS) return false;

    profiles[numUsers] = Profile(usrn, dspn);
    numUsers++;
    return true;
}

//Returns user ID( index in the 'profiles' array)
int Network::findID(string usrn){
    for(int i = 0; i < numUsers; i++)
        if(usrn == profiles[i].getUsername())
            return i;
    return -1;
}

//Default constructor
Network::Network(): numUsers(0) {}