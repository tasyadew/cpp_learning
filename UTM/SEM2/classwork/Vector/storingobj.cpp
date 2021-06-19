//from stackoverflow: https://stackoverflow.com/questions/8777724/store-derived-class-objects-in-base-class-variables
//Problem: Store derived class objects in base class variables
//Topic: Object Slicing

#include <iostream>
#include <vector>
using namespace std;

class Base
{
    public:
    virtual void identify ()
    {
        cout << "BASE" << endl;
    }
};

class Derived: public Base
{
    public:
    virtual void identify ()
    {
        cout << "DERIVED" << endl;
    }
};

//This output will be "DERIVED"
int main (){
    Base *pBase; // The pointer pBase of type " pointer to Base"
    Derived derived;
    // PBase is initialized with the address of derived which is
    // of type Derived

    pBase = &derived;
    // Store pointer to object of Base class in the vector:
    vector<Base*> vect;
    // Add an element to vect using pBase which is initialized with the address 
    // of derived
    vect.push_back(pBase);
    vect[0]->identify();

    return 0;
}

/*
//This output will be "BASE"
int main () 
{
    Derived derived;

    vector<Base> vect;
    vect.push_back(derived);

    vect[0].identify();
    return 0;
}
*/
