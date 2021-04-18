#include <iostream>

using namespace std;

class Point
{
	private:
		double x;
		double y;
		
	public:
	  Point(double,double);
	  void shift(double,double);
	  void setX(double);
	  void setY(double);
	  double getX();
	  double getY();
};

Point::Point(double vx=0, double vy=0){
	x=vx;
	y=vy;
}

void Point::setX(double vx)
{  x = vx; }


void Point::setY(double vy)
{  y=vy; }


double Point::getX(){
	return x;
}

double Point::getY(){
	return y;
}

void Point::shift(double xv, double vy){
	double x_amount = x+=x;
	double y_amount = y+=y;
}

int main(){
	Point p1(1.0,2.0);
	Point p2;
	
	cout << "Coordinates of p2 before shift " <<endl;
	cout << "x = "<< p2.getX() << " y = "<< p2.getY()<<endl;
	
	p2.setX(3.0);
	p2.setY(4.0);
	
	p2.shift(p2.getX(),p2.getY());
	cout << "Coordinates of p2 after shift " <<endl;
	cout << "x = "<< p2.getX() << " y = "<< p2.getY()<<endl;
 return 0;	
}