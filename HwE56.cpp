//Mohammad Hossain
//Professor: Mingh Nyugen
//Date: 3/6/22
//Homework E5.6 - 1 Character Per Line
//Write a function
//string middle(string str) that returns a string containing the middle character in str if the length of str is odd,
//or the two middle characters if the length is even. For example, middle("middle") returns "dd".
#include <iostream>
#include <string>           //This library will gurantee the functions of strings such as .length()
using namespace std;

string middle(string str){                //void is used to let the function do its thing, but not get anything back in return
    if(str.length() % 2 == 0){      //the string is even
        return(str = str.substr(str.length()/2 - 1, 2));       //substr() takes the (starting position, and length you want it to go from starting position)
    }
    else{
         return(str.substr(str.length()/2, 1));
    }
}

int main()
{
    middle("abcde");
    cout << middle("abcde") << endl;      //use this line if you want to get output
    return 0;
}


