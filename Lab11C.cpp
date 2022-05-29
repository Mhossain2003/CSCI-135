/*
Mohamamd Hossain
Course: CSCI-136
Instructor: Minh Nyugen
Assignment: Lab 11C: Introducing Object oriented programming
social3.cpp

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
#include <string>
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
  // Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
  // return true if success (if both usernames exist), otherwise return false
  bool follow(string usrn1, string usrn2);

  // Print Dot file (graphical representation of the network)
  void printDot();

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
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
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
//Network::Network(): numUsers(0) {}

Network::Network(): numUsers(0) {
    for(int row = 0; row < MAX_USERS; row++)
        for(int col = 0; col < MAX_USERS; col++)
            following[row][col] = false;
}

bool Network::follow(string usrn1, string usrn2){
    //HW: Check if both usrn1 and usrn2 exist in the network
    //Return false if one of them (or both) is not in the network
    //Otherwise, change the status of 'following' matrix accordingly
    //return true
    int id1 = findID(usrn1);
    int id2 = findID(usrn2);

    if(id1 != -1 && id2 != -1){
        following[id1][id2] = true;
        return true;
    }
    else{
        return false;
    }
}

//Print dot
void Network::printDot(){
    cout << "digraph {" << endl;
    for(int i = 0; i < numUsers; i++){
        cout << "\"@" << profiles[i].getUsername() << "\"" << endl;
    }
    //cout << endl;
    for(int i = 0; i < numUsers; i++){
        for(int j = 0; j < numUsers; j++){
            if(following[i][j] == true){
                cout << "\"@" << profiles[i].getUsername() << "\"" << " -> ";
                cout << "\"@" << profiles[j].getUsername() << "\"" << endl;
            }
        }
    }
    cout << "}" << endl;
}