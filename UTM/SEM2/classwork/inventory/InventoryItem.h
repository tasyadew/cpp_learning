#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <cstring>

const int DEFAULT_SIZE = 100;

//inline class & testing overloading constructor
class InventoryItem
{
    private:
        char *desc; //pointer to array of char
        double cost;
        int units;

    public:
        //3 types of overloading constructor:
        //InventoryItem();
        //InventoryItem(char* d);
        //InventoryItem(char *d, double c, int u);
/*
        InventoryItem()
        {
            desc = new char [DEFAULT_SIZE]; //allocate default memory
            *desc = '\0'; //store null terminator at first char
            cost = 0.0;
            units = 0.0;
        }
*/
        InventoryItem(char* d)
        {
            desc = new char [strlen(d) + 1];
            strcpy(desc, d);
            cost = 0.0;
            units = 0.0;
        }

        InventoryItem(char *d, double c, int u)
        {
            desc = new char [strlen(d) + 1]; //point to new char array
            strcpy(desc, d); //copy user input (d) into private member (desc)
            cost = c;
            units = u;
        }

        ~InventoryItem() //destructor
            { delete [] desc; } //release dynamic memory
        
        const char *getDescription() const
            { return desc; }

        double getCost() const  
            { return cost; }

        int getUnits() const 
            { return units; }
        
};

#endif