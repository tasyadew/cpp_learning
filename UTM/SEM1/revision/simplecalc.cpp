//This program performs basic arithmetic for + - / *

#include <iostream>
using namespace std;

int main(){
    //var
    double num1, num2, ans;
    char operation;
    // ask user input
    cout << "Enter arithmetic operation => ";
    cin >> num1 >> operation >> num2;
    //case
    switch (operation)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
            ans = num1 - num2;
            break;
    case '*':
            ans = num1 * num2;
            break;
    case '/':
            ans = num1 / num2;
            break;

    }

    //display
    cout << "Result = " << ans;

    return 0;
}