/*****************************************************************************************
7. Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years
********************************************************************************************/

#include <iostream>
using namespace std;

int main(){
    const float RISING_LEVEL = 1.5;

    cout << "current ocean’s level will be in 5 years is " << 5*RISING_LEVEL << endl;
    cout << "current ocean’s level will be in 7 years is " << 7*RISING_LEVEL << endl;
    cout << "current ocean’s level will be in 10 years is " << 10*RISING_LEVEL << endl;

}