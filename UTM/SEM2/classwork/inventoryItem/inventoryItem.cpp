#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main(){
	
	InventoryItem stock3;
	InventoryItem stock4("Rack");
	InventoryItem stock("Wrench",8.75,20);
	InventoryItem *stock2 = new InventoryItem("Book",8.00,2);
	
	
	cout << setprecision(2) <<fixed<<showpoint;
	
	cout <<"Stock 1"<<endl;
	cout << "Item description: "<<stock.getDescription() << endl;
	cout << "Cost : RM"<<stock.getCost() << endl;
    cout << "Units on hand : "<<stock.getUnits() << endl;
    
    cout << "Item description: "<<stock2->getDescription()<< endl;
	cout << "Cost : RM"<<stock2->getCost() << endl;
    cout << "Units on hand : "<<stock2->getUnits() << endl;
    delete stock2;
    
    InventoryItem stock5 = stock; //(stock);
    stock5.setDescription("Stool");
    cout <<"\nStock 5"<<endl;
    cout << "Item description: "<<stock5.getDescription()<< endl;
	cout << "Cost : RM"<<stock5.getCost() << endl;
    cout << "Units on hand : "<<stock5.getUnits() << endl;
    
    return 0;

}