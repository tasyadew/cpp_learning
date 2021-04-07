#include <iostream>
using namespace std;

class Point{
    private:
        double x, y;
    public:
        Point (double, double); //constructor
        void shift (double, double);
        void set_x (double);
        void set_y (double);
        double get_x ();
        double get_y ();
};

Point::Point (double vx=0, double vy=0){
    x=vx;
    y=vy;
}

void Point::set_x (double vx){
    x = vx;
}

void Point::set_y (double vy){
    y = vy;
}

double Point::get_x (){
    return x;
}

double Point::get_y (){
    return y;
}

void Point::shift (double vx, double vy){
    double x_amount = vx+x;
    double y_amount = vy+y;
}

int main(){
    Point p1 (1.0, 2.0);
    Point p2;

    cout << "Coordinates of p2 before shift : " << endl;
    cout << "x = " << p2.get_x() << " " << "y = " << p2.get_y() << "\n\n";

    //shift
    p2.set_x(4.0);
    p2.set_y(3.0);

    p2.shift(p2.get_x(), p2.get_y());

    cout << "Coordinates of p2 after shift : " << endl;
    cout << "x = " << p2.get_x() << " " << "y = " << p2.get_y() << "\n\n";
    
}