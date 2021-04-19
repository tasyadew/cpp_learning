#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main(){
    InventoryItem stock("Wrench", 8.75, 20);
    //InventoryItem stock1();
    //Stock1 is a default constructor. Default constructor cannot
    //exist alongside with constructor that has parameters
    InventoryItem stock2("Maggie");

    cout << setprecision(2) << fixed << showpoint;

    //display stock
    cout << "Item Description: " << stock.getDescription() << endl;
    cout << "Cost: $" << stock.getCost() << endl;
    cout << "Units on hand: " << stock.getUnits() << endl;

    //display stock1
    //cout << "Item Description: " << stock1.getDescription() << endl;
    //cout << "Cost: $" << stock1.getCost() << endl;
    //cout << "Units on hand: " << stock1.getUnits() << endl;

    //display stock2
    cout << "Item Description: " << stock2.getDescription() << endl;
    cout << "Cost: $" << stock2.getCost() << endl;
    cout << "Units on hand: " << stock2.getUnits() << endl;

    return 0;
}