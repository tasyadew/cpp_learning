/*
Name        : Natasya Nadhira Binti Ahmad Nazrain
Matric no   : A20EC0103

LAB 1
*/

#include<iostream>
#include<cstring>
#include "chemistryatom.h"
#include "chemistryatom.cpp"
using namespace std;

int main(){

    //declare variable & class
    ChemistryAtom ca;
    string atomName;
    double atomWeight;
    int atomNum;

    //ask for user input
    cout << "Enter a chemistry atomic name: ";
    cin >> atomName;

    cout << "Enter a chemistry atomic weight: ";
    cin >> atomWeight;

    cout << "Enter a chemistry atomic number: ";
    cin >> atomNum;

    ca.setName(atomName);
    ca.setWeight(atomWeight);
    ca.setNumber(atomNum);

    //display
    cout << "Here is the atom's data: /n";
    cout << "Name: " << ca.getName() << endl;
    cout << "Weight: " << ca.getWeight() << endl;
    cout << "Number: " << ca.getNumber() << endl;
    
    return 0;
}