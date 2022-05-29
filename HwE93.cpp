//Mohammad Hossain
//5/8/22
//Instructor: Minh Nyugen
//Homework E9.3 - Light Switch
/*
Simulate a circuit for controlling a hallway light that has switches at both ends of 
the hallway. Each switch can be up or down, and the light can be on or off. Toggling 
either switch turns the lamp on or off. Provide member functions
int get_first_switch_state() // 0 for down, 1 for up
int get_second_switch_state()
int get_lamp_state() // 0 for off, 1 for on
void toggle_first_switch()
void toggle_second_switch()
*/
#include <iostream>
using namespace std;

class Circuit{
    private:
		int first_switch = 0;
		int second_switch = 0;
		int lamp_state = 0;
	public:
		int get_first_switch_state(){
            return first_switch;
        };
		int get_second_switch_state(){
            return second_switch;
        };
		int get_lamp_state(){
            return lamp_state;
        };
		void toggle_first_switch(){
            first_switch = !first_switch;
            lamp_state = !lamp_state;
        };
		void toggle_second_switch(){
            second_switch = !second_switch;
            lamp_state = !lamp_state;
        };
	
};
/*
    private:
        bool lamp_state, first_state, second_state = false;
    public:
        int get_first_switch_state(){
            return first_state;
        }
        int get_second_state(){
            return second_state;
        }
        int get_lamp_state(){
            return lamp_state;
        }
        void toggle_first_switch(){
            first_state = !first_state;
            lamp_state = !lamp_state;
        }
        void toggle_second_switch(){
            second_state = !second_state;
            lamp_state = !lamp_state;
        }
};
*/