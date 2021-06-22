#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define SIZE 12 //size of stock array 
#define MAX_SIZE 30//maximum capacity of stocks that vending machine can hold


/*---Class Defination--------------------------------------------------------------------------*/

//Stock Inheritance Hierarchies 
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
            expiryDate = d;
            weight = w;
            type = t;
        }   

        void showDetails(){
            cout << "Name        : " << stockName << endl;
            cout << "Type        : " << type << endl;
            cout << "Expiry Date : " << expiryDate << endl;
            cout << "Net Weight  : " << weight << " g" << endl;
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
            expiryDate = d;
            weight = w;
            flavour = f;
        }

        void showDetails(){
            cout << "Name        : " << stockName << endl;
            cout << "Flavour     : " << flavour << endl;
            cout << "Expiry Date : " << expiryDate << endl;
            cout << "Net Weight  : " << weight << " g" << endl;
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
        expiryDate = d;
        volume = v;
        fruit = f;
        }

        void showDetails(){
            cout << "Name        : " << stockName << endl;
            cout << "Fruit       : " << fruit << endl;
            cout << "Expiry Date : " << expiryDate << endl;
            cout << "Volume      : " << volume << " ml" << endl;
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
        expiryDate = d;
        volume = v;
        packaging = pack;
        }

        void showDetails(){
            cout << "Name        : " << stockName << endl;
            cout << "Packaging   : " << packaging << endl;
            cout << "Expiry Date : " << expiryDate << endl;
            cout << "Volume      : " << volume << " ml" << endl;
        }   
};

class PaymentSystem{
    private:
        float userPay;
    public:
        //Mutator
        void setPayment(float pay){userPay = pay;}
};

class VendingMachine{
    private:
        int numStock;
        PaymentSystem ps;       //composition
        Stock *sto[MAX_SIZE];   //aggregation
    public:
        VendingMachine(){
            numStock = 0;
        }

        void addStock(Stock* s){
            if (numStock < MAX_SIZE){
                sto[numStock] = s; //dereference
                numStock++;
            }else{
                cout << "Sorry! The vending machine can only hold until " 
                     << MAX_SIZE << " stocks only." << endl;
            }
        }

        void menu(){
            cout << string(15, ' ') << "VENDING MACHINE UTM" << endl;
            cout << string(50,'=') << endl;
            cout << "| ID | Name                | Price (RM) | Stocks |" << endl; //spaces: 4,21,12,8
            cout << string(50,'=') << endl;
            //food section
            cout << " FOOD" << endl;
            cout << string(50,'=') << endl;
            for(int i = 0; i < 6; i++){
                cout << "| " << setfill('0') << setw(2) << right << sto[i]->getID() << " | ";
                cout << setfill(' ') << setw(20) << left << sto[i]->getName() << "| ";
                cout << setfill(' ') << setw(11) << left << fixed << setprecision(2) << sto[i]->getPrice() << "| ";
                cout << setfill(' ') << setw(7) << left << sto[i]->getTotalStock() << "|" << endl;
            }
            
            //drink section
            cout << string(50,'=') << endl;
            cout << " DRINK" << endl;
            cout << string(50,'=') << endl;
            for(int i = 6; i < SIZE; i++){
                cout << "| " << setfill('0') << setw(2) << right << sto[i]->getID() << " | ";
                cout << setfill(' ') << setw(20) << left << sto[i]->getName() << "| ";
                cout << setfill(' ') << setw(11) << left << fixed << setprecision(2) << sto[i]->getPrice() << "| ";
                cout << setfill(' ') << setw(7) << left << sto[i]->getTotalStock() << "|" << endl;
            }
            cout << string(50,'=') << endl;
            cout << " 0 for Exit" << endl;
            cout << string(50,'=') << endl << endl;
            cout << "Enter ID => ";            
        }
};



int main(){
    //variables
    int inputID;
    char inputConfirmation;
    float inputPayment;

    //Available Stocks in vending machine (Predefined)
    Chocolates f1(1, "Cadbury Chocolate", 3.5, 23, "27.03.2023", 40, "Dark Chocolate");
    Chocolates f2(2, "Hershey's Chocolate", 4.0, 17, "15.05.2022", 40, "Cookies and Cream");
    Chocolates f3(3, "m&m Chocolate", 6.9, 0, "12.12.2021", 35, "Peanut");
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
    Stock *list[SIZE] = {&f1, &f2, &f3, &f4, &f5, &f6, &d1, &d2, &d3, &d4, &d5, &d6};

    //object declarations
    VendingMachine vm;
    PaymentSystem p;

    //adding stocks into vending machine
    for (int i = 0; i < SIZE; i++){
        vm.addStock(list[i]);
    }

    //Providing interface to user
    vm.menu();
    cin >> inputID;

    while (inputID != 0){
        if (inputID < 0 || inputID > SIZE){ //checking validity of input ID
            cout << "Error: Input ID is out of range!" << endl;
        }else{
            inputID--; //to standardize with array position

            //To check if stock is available or not
            int tempTotal = list[inputID]->getTotalStock();
            if(tempTotal == 0){
                cout << "Sorry!! Out of Stock." << endl;
            }else{
                //Show additional details before buying confirmation
                cout << "Additional Details:\n"; 
                list[inputID]->showDetails();
                cout << endl << endl;

                //ask for purchase confirmation
                cout << "Confirm purchase? (y/n) => ";
                cin >> inputConfirmation;

                //if user input other than y, it will loop back to menu
                if(!(inputConfirmation == 'y' || inputConfirmation == 'Y')){
                    cout << "Returning to main menu..." << endl;
                }else{
                    
                    cout << "Total amount to pay is RM " << endl;
                    cout << "Enter amount to pay => RM ";
                    cin >> inputPayment;
                    p.setPayment(inputPayment);
                    cout << endl << "Stock before: " << list[inputID]->getTotalStock() << endl;
                    (*list[inputID])--; //dereference object to be operator overload
                    cout << endl << "Stock After: " << list[inputID]->getTotalStock() << endl;
                }
            }
        }

        system("pause");
        system("cls");

        //ask for new operation until user choose exit
        vm.menu();
        cin >> inputID; 
    }
    
    //when user choose Exit
    cout << "Thank you for using this vending machine! " << endl << endl;
    cout << "Closing program...";
    exit(EXIT_SUCCESS);

    return 0;
}