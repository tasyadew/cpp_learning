//To test array of objects of parent's class to store
//child class and friend relationship

#include <iostream>
using namespace std;

#define PI 3.14

class Shape{
    public:
        Shape(){}
        virtual int getArea(){return 0;} //Static Binding

        
};

class Circle : public Shape{
    private:
        int radius;
    public:
        Circle(int r){radius = r;}
        int getArea(){return PI*radius*radius;}
        friend ostream&operator<<(ostream&op,Shape&s);
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
        friend ostream&operator<<(ostream&op,Shape&s);
        
};

ostream&operator<<(ostream&op,Shape&s){
    op << "Width of the rectangle is " << s.width << endl;
    op << "Height of the rectangle is " << s.height << endl;
    return op;
}

int main(){
    return 0;
}