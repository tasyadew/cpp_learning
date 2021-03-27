/***************************************************************
##Sales Prediction
The East Coast sales division of a company generates 58 percent 
of total sales. Based on that percentage, write a program that 
will predict how much the East Coast division will generate if 
the company has $8.6 million in sales this year.
****************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const float PERCENTAGE = 0.58;
    float initialVal, calc;

    cout << "Enter total money generated: ";
    cin >> initialVal;
    calc = initialVal * PERCENTAGE;

    cout << "Total with " << PERCENTAGE*100 << " percent is " 
         << fixed << setprecision(2)  << calc;
}