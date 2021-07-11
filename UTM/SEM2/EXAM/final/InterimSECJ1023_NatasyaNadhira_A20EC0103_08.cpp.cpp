/*
*   Name        : Natasya Nadhira Binti Ahmad Nazrain
*   Matric No   : A20EC0103
*   Section     : 08
*   Course      : SECJ1023-08
*
*   Final Exam
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define SIZE 10 //max size of items array 

//given in figure 3
class TennisShop{
    private:
        string brand;
        double price;
        int quantity;
    
    public:
        TennisShop() {}

        TennisShop(int quantity){
            this->quantity = quantity;
        }

        void setBrandPrice(string brand, double price){
            this->price = price;
            this->brand = brand;
        }

        string getBrand() {return brand;}
        double getPrice() {return price;}
        int getQuantity() {return quantity;}

        virtual void display() = 0; //item bought
        virtual double calcPrice() = 0;
};

class Racket : public TennisShop{
    private:
        int racketType;

    public:
        Racket() {}

        Racket(int racketType, int quantity) : TennisShop(quantity){
            this->racketType = racketType;
            switch(racketType){
                case 1:
                    TennisShop::setBrandPrice("Wilson", 569.70);
                    break;
                case 2:
                    TennisShop::setBrandPrice("Yonex", 719.70);
                    break;
                case 3:
                    TennisShop::setBrandPrice("Yonex", 1289.70);
                    break;
                case 4:
                    TennisShop::setBrandPrice("Dunlop", 989.70);
                    break;
            }
        }

        void display(){
            cout << "Tennis Racket" << endl;
        }

        double calcPrice(){
            return getPrice() * getQuantity();
        }
};

class Ball : public TennisShop{
    private:
        int numBalls, ballId;

    public:
        Ball();
        Ball(int,int);
        double calcDisc();
};

class Customer{
    private:
        string CustName;
        TennisShop *itemList;
        int numOfItem;

    public:
        Customer(string name){
            CustName = name;
            numOfItem = 0;
        }

        string getName() { return CustName;}

        void buy(TennisShop* t){

        }

        void print(){
            cout << "LIST OF TENNIS ITEMS BOUGHT\n";
            for (int i = 0; i < SIZE; i++){
                cout << "----- Item #" << i+1 << " -----" << endl;
                itemList->display();
            }
        }
};

//stand alone functions (given in figure 4)
int displayMainMenu(){
    int choice;
    cout << "==========[MENU]============\n";
    cout << "  [1] Buy item\n";
    cout << "  [2] Print all items\n";
    cout << "  [3] Exit\n";
    cout << "============================\n";
    cout << "Choice: ";
    cin >> choice;
    return choice;
}

int displayRacketMenu(){
    int choice;
    cout << endl;
    cout << "*** Racket ***\n";
    cout << "  [1] Wilson: Junior Tennis Racket\n";
    cout << "  [2] Yonex: Beginners Tennis Racket\n";
    cout << "  [3] Yonex: Advanced Tennis Racket\n";
    cout << "  [4] Dunlop: All Tennis Racket\n";
    cout << "Choice: ";
    cin >> choice;
    return choice;
}

int displayBallMenu(){
    int choice;
    cout << endl;
    cout << "*** Ball ***\n";
    cout << "  [1] Wilson: Roland Garros All Court\n";
    cout << "  [2] Wilson: US Open\n";
    cout << "  [3] Dunlop: Fort Max TP KNLTB\n";
    cout << "  [4] Dunlop: Fort All Court\n";
    cout << "Choice: ";
    cin >> choice;
    return choice;
}

//Main Function
int main(){
    TennisShop *p;
    Customer c("ARIF AIMAN");

    int input = displayMainMenu();
    while(input != 3){
        switch(input){
            case 1:
                //display buy item
                break;
            case 2: 
                //print all items
                break;
            default:
                cout << "\nInvalid input. Try again!\n";
        }
        input = displayMainMenu();
    }
    cout << "\nThank you for using this system ;)\n";

    return 0;
}