/*
* Name        : Natasya Nadhira Binti Ahmad Nazrain
* Matric no   : A20EC0103
*
* LAB 2 Program 1
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //user input
    string input;
    cout << "Enter your date today. -> ";
    getline(cin, input); //ddmmyyyy

    //conversion
    input.insert(2, "/"); //dd/mmyyyy
    input.insert(5, "/"); //dd/mm/yyyy
    cout << "Your formatted date. -> " << input;

    return 0;
}