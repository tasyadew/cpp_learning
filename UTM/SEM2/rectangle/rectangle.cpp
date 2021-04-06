#include "rectangle.h"

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setLength(double l)
{
	length=l;
}

double Rectangle::getWidth() const
{
	return width;
 } 
 
 double Rectangle::getLength() const
{
	return length;
} 
 
 
double Rectangle::getArea() const
{
	return width*length;
} 
 