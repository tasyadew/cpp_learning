#include <iostream>
using namespace std;

int main() {
    int val1, val2;
    cout << "Enter smaller value: ";
    cin >> val1;
    cout << "Enter bigger value: ";
    cin >> val2;

    for(int i= val1; val1 <= val2; val1++){
        switch(val1){
            case 1:
                cout << "one\n";
                break;
            case 2:
                cout << "two\n";
                break;
            case 3:
                cout << "three\n";
                break;
            case 4:
                cout << "four\n";
                break;
            case 5:
                cout << "five\n";
                break;
            case 6:
                cout << "six\n";
                break;
            case 7:
                cout << "seven\n";
                break;
            case 8:
                cout << "eight\n";
                break;
            case 9:
                cout << "nine\n";
                break;
            default:
                if(val1%2==0)
                    cout << "even\n";
                else
                    cout << "odd\n";

        }
    }
    return 0;
}
