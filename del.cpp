#include <iostream>
#include<cmath>
using namespace std;

const double PI = 3.141592;

int main () {
    double x;
    cout << "Enter cos(x) in degree : ";
    cin >> x;
    cout << "Do nothing : " << cos(x) << endl;

    //convert
    x = x * PI / 180;
    cout << "x now is " << x << " radian" << endl;
    cout << "After conversion : " << cos(x) << endl; 
    return 0;
}