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
        }

        void display(){
            string racketName;
            switch(racketType){
                case 1:
                    TennisShop::setBrandPrice("Wilson", 569.70);
                    racketName = "Junior Tennis Racket";
                    break;
                case 2:
                    TennisShop::setBrandPrice("Yonex", 719.70);
                    racketName = "Beginners Tennis Racket";
                    break;
                case 3:
                    TennisShop::setBrandPrice("Yonex", 1289.70);
                    racketName = "Advanced Tennis Racket";
                    break;
                case 4:
                    TennisShop::setBrandPrice("Dunlop", 989.70);
                    racketName = "All Tennis Racket";
                    break;
            }

            cout << fixed << setprecision(2);
            cout << "Tennis Racket\n";
            cout << "Brand   : " << getBrand() << endl;
            cout << "Type    : " << racketName << endl;
            cout << "Price   : RM " << getPrice() << endl;
            cout << "No Discount!\n";
            cout << "Quantity: " << getQuantity() << endl;
            cout << "Subtotal: RM " << calcPrice() << endl;
        }

        double calcPrice(){
            return getPrice() * getQuantity();
        }
};

class Ball : public TennisShop{
    private:
        int numBalls, ballId;

    public:
        Ball() {}

        Ball(int ballId, int quantity) : TennisShop(quantity){
            this->ballId = ballId;
        }

        //discount 15% = 85% of original price
        double calcDisc(){ 
            return 0.85 * getPrice() * getQuantity();
        }

        void display(){
            string ballName;
            switch(ballId){
                case 1:
                    TennisShop::setBrandPrice("Wilson", 38.40);
                    ballName = "Roland Garros All Court";
                    numBalls = 4;
                    break;
                case 2:
                    TennisShop::setBrandPrice("Wilson", 28.80);
                    ballName = "US Open";
                    numBalls = 3;
                    break;
                case 3:
                    TennisShop::setBrandPrice("Dunlop", 81.00);
                    ballName = "Fort Max TP KNLTB";
                    numBalls = 4;
                    break;
                case 4:
                    TennisShop::setBrandPrice("Dunlop", 33.00);
                    ballName = "Fort All Court";
                    numBalls = 3;
                    break;
            }

            cout << fixed << setprecision(2);
            cout << "Tennis Ball\n";
            cout << "Brand      : " << ballName << endl;  //trying to match the output given
            cout << "Description: " << getBrand() << endl;
            cout << "Price      : RM " << getPrice() << " for " << numBalls << " balls per tube\n";
            cout << "Discount   : 15.00%\n";
            cout << "Quantity   : " << getQuantity() << endl;
            cout << "Subtotal   : RM " << calcPrice() << endl;
        }

        double calcPrice(){
            return calcDisc();
        }
};

class Customer{
    private:
        string CustName;
        TennisShop *itemList[SIZE];
        int numOfItem;

    public:
        Customer(string name){
            CustName = name;
            numOfItem = 0;
        }

        string getName() { return CustName;}

        void buy(TennisShop* item){
            itemList[numOfItem] = item;
            numOfItem++;
        }

        void print(){
            double totalPrice = 0.0;
            cout << "\nLIST OF TENNIS ITEMS BOUGHT\n\n";
            for (int i = 0; i < numOfItem; i++){
                cout << "----- Item #" << i+1 << " -----" << endl;
                itemList[i]->display();
                totalPrice += itemList[i]->calcPrice();
                cout << endl;
            }
            cout << "TOTAL: RM " << totalPrice << "\n\n";
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

    cout << "WELCOME " << c.getName() << "\n\n";
    int input = displayMainMenu();
    while(input != 3){
        switch(input){
            case 1:
                int choose, quantity;
                cout << endl;
                cout << "<< Item to buy >>\n";
                cout << "  [1] Racket\n";
                cout << "  [2] Ball\n";
                cout << "Choice: ";
                cin >> choose;

                if(choose == 1) 
                {
                    int itemChoose = displayRacketMenu();
                    cout << "Quantity: ";
                    cin >> quantity;
                    p = new Racket(itemChoose, quantity);
                    c.buy(p);
                }
                else
                {
                    int itemChoose = displayBallMenu();
                    cout << "Quantity: ";
                    cin >> quantity;
                    p = new Ball(itemChoose, quantity);
                    c.buy(p);
                }
                break;
            case 2: 
                c.print();
                break;
            default:
                cout << "\nInvalid input. Try again!\n";
        }
        cout << endl;
        input = displayMainMenu();
    }
    cout << "\nThank you for using this system ;)\n";

    return 0;
}