//Mohammad Hossain 
//3/20/22
//Lab instructor: Mingh Nyugen
//Lab Quiz 02: Substring pyramid:
//Enter a string(may contain spaces), print one letter in the first line,
//then add one more letter until all letters are displayed.
//Then decrease one one line a time until no more letter displayed.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string pyramid;
    cout << "Enter a string: " << endl;
    getline(cin, pyramid);

    string final;   //empty string
    for(int i = 0; i < pyramid.size(); i++){
        final += pyramid[i];
        cout << final << endl;
    }
    int k = pyramid.size();
    for(int i = k - 1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            cout << pyramid[j];
        }
        cout << endl;
    }
}
