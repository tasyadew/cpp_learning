//This program will show the static binding between 
//base class and derived class

#include <iostream>
using namespace std;

#define PI 3.14

class Shape{
    public:
        Shape(){}
        int getArea(){return 0;} //Static Binding
};

class Circle : public Shape{
    private:
        int radius;
    public:
        Circle(int r){radius = r;}
        int getArea(){return PI*radius*radius;}
};

class Rectangle : public Shape{
    private:
        int width, height;
    public:
        Rectangle(int w, int h){
            width = w;
            height = h;
        }
        int getArea(){return width*height;}
};

int main(){
    //define objects
    Shape *p;
    Shape s;
    Circle c(10);
    Rectangle r(2,6);

    //reassign object reference for get area
    p = &s; //pointer p points to address of s (Shape)
    cout << "Shape Area = " << p->getArea() << endl;

    p = &c; //pointer p points to address of c (Circle)
    cout << "Circle Area = " << p->getArea() << endl;

    p = &r; //pointer p points to address of r (Rectangle)
    cout << "Rectangle Area = " << p->getArea() << endl;

    return 0;
}

/*
The Output is:
Shape Area = 0
Circle Area = 0
Rectangle Area = 0

This is because Static Binding is decided during COMPILATION.
Thus, any changes of pointer cannot be override
This is when Dynamic Binding is used to solve this issue. 
*/