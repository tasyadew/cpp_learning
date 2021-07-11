#include <iostream>
using namespace std;

class Stock{
    protected:
        int stockID;
        string stockName;
        float stockPrice;
        int currentStock;
        string expiryDate;
    public:
        Stock(int i = 0, string n = "", float p = 0.0, int c = 0){
            stockID = i;
            stockName = n;
            stockPrice = p;
            currentStock = c;
        }
        //Accessors
        int getID(){return stockID;}
        string getName(){return stockName;}
        float getPrice(){return stockPrice;}
        int getTotalStock(){return currentStock;}

        //virtual void (applying polymorphism concept)
        virtual void showDetails(){
            cout << "ERROR: No data to be displayed!" << endl;
        }

        Stock operator--(int){
            return currentStock--;
        }
};