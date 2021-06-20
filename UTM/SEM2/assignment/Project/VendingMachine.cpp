#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define SIZE 15 //size of stock array 


/*---Class Defination--------------------------------------------------------------------------*/

//Stock Inheritance Hierarchies 
class Stock{
    protected:
        int stockID;
        string stockName;
        float stockPrice;
        int currentStock;
        string expiraryDate;
    public:
};

//Food - Chocolate, Cookies
class Food : public Stock{
    protected:
        int weight;
    public:

};

class Chocolates : public Food{
    private:
        string type;
    public:
        Chocolates(int i, string n, float p, int q, string d, int w, string t){
            stockID = i;
            stockName = n;
            stockPrice = p;
            currentStock = q;
            expiraryDate = d;
            weight = w;
            type = t;
        }        
};

class Cookies : public Food{
    private:
        string flavour;
    public:
        Cookies(int i, string n, float p, int q, string d, int w, string f){
            stockID = i;
            stockName = n;
            stockPrice = p;
            currentStock = q;
            expiraryDate = d;
            weight = w;
            flavour = f;
        }
};

//Drinks - FruitJuice, SoftDrinks
class Drinks : public Stock{
    protected:
        int volume;
    public:
    
};

class FruitJuice : public Drinks{
    private:
        string fruit;
    public:
        FruitJuice(int i, string n, float p, int q, string d, int v, string f){
        stockID = i;
        stockName = n;
        stockPrice = p;
        currentStock = q;
        expiraryDate = d;
        volume = v;
        fruit = f;
    }
};

class SoftDrinks : public Drinks{
    private: 
        string packaging;
    public:
        SoftDrinks(int i, string n, float p, int q, string d, int v, string pack){
        stockID = i;
        stockName = n;
        stockPrice = p;
        currentStock = q;
        expiraryDate = d;
        volume = v;
        packaging = pack;
        }
};

class PaymentSystem{
    private:
    public:
};

class VendingMachine{
    private:
    public:
        void menu(){
            cout << string(15, ' ') << "VENDING MACHINE UTM" << endl;
            cout << string(50,'=') << endl;
            cout << "| ID | Name                | Price (RM) | Stocks |" << endl; //spaces: 4,21,12,8
            cout << string(50,'=') << endl;
            //food section
            cout << " FOOD" << endl;
            cout << string(50,'=') << endl;
            for(int i = 1; i <= 9; i++){
                //cout << " " << setfill('0') << setw(2) << 
            }
            
            //drink section
            cout << " DRINK" << endl;
            cout << string(50,'=') << endl;
        }
};

/*---End Of Class Defination----------------------------------------------------------------------*/

int main(){
    //object declarations
    VendingMachine vm;

    //Available Stocks in vending machine : Predefined
    Chocolates f1(1, "Cadbury Chocolate", 3.5, 23, "27.03.2023", 40, "Dark Chocolate");
    Chocolates f2(2, "Hershey's Chocolate", 4.0, 17, "15.05.2022", 40, "Cookies and Cream");
    Chocolates f3(3, "m&m Chocolate", 6.9, 1, "12.12.2021", 35, "Peanut");
    Cookies f4(4, "Oat Krunch", 2.0, 27, "31.08.2022", 200, "Strawberry and Blackcurrant");
    Cookies f5(5, "Chipsmore", 1.5, 13, "30.07.2021", 280, "Double Chocolate");
    Cookies f6(6, "Oreo", 1.9, 16, "28.02.2023", 250, "Original");
    FruitJuice d1(7, "Twister", 5.5, 15, "02.01.2022", 500, "Orange");
    FruitJuice d2(8, "Bliss", 8.0, 30, "04.02.2022", 800, "Kiwi");
    FruitJuice d3(9, "Yeo's", 1.0, 3, "12.06.2022", 200, "Lychee");
    SoftDrinks d4(10, "100 plus", 1.5, 12, "06.03.2022", 400, "Bottle");
    SoftDrinks d5(11, "Pepsi", 2.5, 13, "08.04.2022", 350, "Can");
    SoftDrinks d6(12, "Coca Cola", 2.9, 14, "10.05.2022", 355, "Can");

    //Assign Objects into an array
    Stock arr[SIZE] = {f1, f2, f3, f4, f5, f6, d1, d2, d3, d4, d5, d6};

    //Providing interface to user
    vm.menu();
    int input;
    cin >> input;

    while (input != 0){

        system("pause");
        system("cls");

        //ask for new operation until user choose exit
        vm.menu();
        cin >> input; 
    }

    cout << "Closing program...";
    exit(EXIT_SUCCESS);

    return 0;
}