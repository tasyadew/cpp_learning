/*********************************************************
Natasya Nadhira Bt Ahmad Nazrain
A20EC0103
Programming Technique 1


//////////////////////// Part 1 //////////////////////////

Question 1- Write a function prototype and header for a
            function named distance. The function should
            return a double and have a two double
            parametes: rate and time.

prototype: double distance(double, double);
header: double distance(double rate, double time)

Question 2- Write a function prototype and header for a
            function named days. The function should
            return an integer and have three integer
            parametes: years, months and weeks.

prototype: int days(int, int, int);
header: int days(int years, int months, int weeks)

Question 3- Examine the following function header, then
            write an example call to the function.
            void showValue(int quantity)

showValue(value1);

**********************************************************/

//////////////////////// Part 2 //////////////////////////

#include<iostream>
using namespace std;

//get user input for length
double getLength(){
  double l;
  cout<<"Enter the rectangle's length: ";
  cin>>l;

  return l;
}

//get user input for width
double getWidth(){
  double w;
  cout<<"Enter the rectangle's width: ";
  cin>> w;

  return w;
}

//calculate area of rectangle
double getArea(double l, double w){ //parameter length and width
  double a;
  a=l*w;

  return a;
}

//display data for length, width and area
void displayData(double l, double w, double a){ //parameter length, width and area
  cout<<"The length of the rectangle is: "<< l << endl;
  cout<<"The width of the rectangle is: "<< w << endl;
  cout<<"The area of the rectangle is: "<< a << endl;
}

// main function
int main(){
  double length, width, area;

  length = getLength();
  width = getWidth();
  area = getArea(length, width);
  displayData(length, width, area);

  return 0;
}
