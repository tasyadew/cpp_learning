#include<iostream>
#include "rectangle.h"
#include "rectangle.cpp"
using namespace std;

int main(){
	Rectangle box;
    double recWidth, recLength;
	cout << "This program will calculate the area of a Rectangle\n";
	cout << "What is the width? ";
	cin >> recWidth;
	cout << "What is the length? ";
	cin >> recLength;
	box.setWidth(recWidth);
	box.setLength(recLength);
	
	//display 
	cout << " Here is the Rectangle data\n";
	cout << " Width: "<<box.getWidth() << endl;
	cout << " Length: "<<box.getLength() << endl;
	cout << " Area: "<<box.getArea() << endl;
	
	return 0;
			
}