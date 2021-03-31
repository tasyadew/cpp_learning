#include "chemistryatom.h"

void ChemistryAtom::setName(string n){
    name = n;
}

void ChemistryAtom::setWeight(double w){
    atomicWeight = w; 
}

void ChemistryAtom::setNumber(int num){
    atomicNumber = num;
}

string ChemistryAtom::getName() const{
    return name;
}

double ChemistryAtom::getWeight() const{
    return atomicWeight;
}

int ChemistryAtom::getNumber() const{
    return atomicNumber;
}
