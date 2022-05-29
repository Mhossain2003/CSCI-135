//Mohammad Hossain
//5/8/22
//Instructor: Minh Nyugen
//Homework E9.5 - Rectangle
/*
Implement a class Rectangle. Provide a constructor to construct a rectangle with a 
given width and height, member functions get_perimeter and get_area that compute 
the perimeter and area, and a member function void resize(double factor) that resizes 
the rectangle by multiplying the width and height by the given factor
*/
#include <iostream>
using namespace std;

class Rectangle{
    private:
		double width;
		double height;
	public:
		Rectangle(double input_w, double input_h){
            this->width = input_w;
            this->height = input_h;
        };
		double get_perimeter(){
            double perimeter = (this->width + this->height) * 2;
            return perimeter;
        };
		double get_area(){
            double area = this->width * this->height;
            return area;
        };
		void resize(double factor){
            this->width = this->width * factor;
            this->height = this->height * factor;
        };
};

/*
    private:
        double width, height;
    public:
        Rectangle(double width, double height){   //constructor
            this.width = width;
            this.height = height;
        }
        double get_perimeter(){
            double perimeter = (this.width + this.height) * 2;
            return perimeter;
        }
        double get_area(){
            double area = this.width * this.height;
            return area;
        }
        void resize(double factor){
            this.width = this.width * factor;
        }
};
*/