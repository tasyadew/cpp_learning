/*
* Name        : Natasya Nadhira Binti Ahmad Nazrain
* Matric no   : A20EC0103
*
* LAB 2 Program 2
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //line 1
    string str ("Programming technique 2 is a subject!");
    cout << str << endl;

    //line 2
    str.insert (0, "I like ");
    cout << str << endl;

    //line 3
    str.replace(7, 23, "English");
    cout << str << endl;

    return 0;
}