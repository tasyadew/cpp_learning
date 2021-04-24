#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <cstring>

class InventoryItem
{
	private:
		char *description;
		double cost;
		int units;
		void createDescription(int size, char *value)   { 
          description = new char [size];
           strcpy(description, value); }

		
	public:
		InventoryItem(){
			description= new char [20];
			*description = '\0';
			cost=0.0;
			units=0;
		}
		
		InventoryItem(char* desc){
			description= new char [strlen(desc)];
			strcpy(description,desc);
			cost=0.0;
			units=0;
		}
		
		InventoryItem(char *desc, double c, int u) {
			description=new char [strlen(desc) +1];
			strcpy(description,desc);
			cost =c;
			units=u;
		}
		
		//copy constructor
			InventoryItem(InventoryItem &inv) {
			description=new char [strlen(inv.description) +1];
			strcpy(description,inv.description);
			cost =inv.cost;
			units=inv.units;
		}
		~InventoryItem()
		{ delete [] description;
		  }

        const char *getDescription() const{
        	return description;
		}	
		
		double getCost(){
			return cost;
		}
		
		int getUnits() const
		{ return units;	}
		
		void setDescription(char *d) 
           { strcpy(description, d); }

};
#endif