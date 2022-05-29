//Mohammad Hossain
//Instructor: Minh Nyugen
//5/6/2022
//labquiz13.cpp
//Define class Customer, which has data member name and unique_id, both of string type.
//Define default and non-default constructor, setter, and getter.
#include <iostream>
#include <string>
using namespace std;

class Customer{
    private:
        string name, unique_id;
    public:
        Customer(string name, string unique_id){
            this->name = name;
            this->unique_id = unique_id;
        }
        Customer(){
            name = "";    
            unique_id = "";
        }
        string get_name(){
            return name;
        }
        string get_unique_id(){
            return unique_id;
        }
        void set_name(string input_name){
            name = input_name;
        }
        void set_unique_id(string input_unique_id){
            unique_id = input_unique_id;
        }
};


 //Customer(){
    //    name = "";
    //    unique_id = "";
    //}