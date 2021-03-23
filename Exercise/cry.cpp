#include <iostream>
#include <cstring>
using namespace std;

int getNum();

int main()
{
    int test = getNum();
    cout << test; 
    return 0;
}

int getNum()
{
    //Ask user input for number. if user press enter with no input, return -1
    int x;
    cout << "Input number: ";

    cin >> x;

    if (cin.fail() || cin.peek()=='\n')
        return -1;
    else
        return x;
}
