#include <iostream>
using namespace std;

int largest(int a, int b, int c, int d);

int main(){
    //var
    int num1, num2, num3, num4, display;
    
    //user input
    cout << "Enter four numbers => ";
    cin >> num1 >> num2 >> num3 >> num4;

    //display result
    display = largest(num1, num2, num3, num4);
    cout << "The largest value is " << display;

    return 0;

}

int largest(int a, int b, int c, int d){

    if (a>b && a>c && a>d)
        return a;
    else if(b>c && b>d)
        return b;
    else if(c>d)
        return c;
    else 
        return d;

}