#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    string name;
    //system ("cls");
    //Beep(440,500);

    cout << "Hello! What is your name? => ";
    Beep(800,500);
    getline(cin, name);

    cout << "Press any key to continue...";
    cin.get();
    system("cls");
    cout << "\aGood day " << name;

}
