#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//constant
const int SIZE = 10;

//class
class Name{
    private:
        string firstName, lastName;

    public:
        Name(string fn = "", string ln = ""){
            firstName = fn;
            lastName = ln;
        }
        string getFullName(){
            string fullName;
            fullName = firstName + " " + lastName;
            return fullName;
        }        
};

class Product{
    private:
        string name, category;
        double price;
        int quantity;

    public:
        Product(){
            string name = "";
            string category = "";
            double price = 0.0;
        }
        Product(string n, string c, double p){
            name = n;
            category = c;
            price = p;
        }
        string getName(){return name;}
        string getCategory(){return category;}
        double getPrice(){return price;}
        int getQuantity(){return quantity;}
        void setQuantity(int q){quantity = q;}
};

class Customer{
    private:
        string address;
        int numProduct;
        Name n;     //composition
        Product* prod; //aggregation

    public:
        Customer(string fn, string ln, string a) : n(fn, ln){
            address = a;
            numProduct = 0;
            prod = new Product[SIZE];
        }
        void buy(Product p, int q){
            if (numProduct < SIZE){
                prod[numProduct] = p;
                prod[numProduct].setQuantity(q); 
                numProduct++;
            }else{
                cout << "Sorry!! You already reached the maximum number of procucts purchased.\n";
            }
        }
        void print(){
            cout << "Name   : " << n.getFullName() << endl;
            cout << "Address: " << address << endl;
            cout << "Number of products purchased: " << numProduct << "\n\n";
            cout << left << setw(5) << "No" << setw(20) << "Product Name" 
                 << setw(13) << "Quantity" << setw(20) << "Unit Price(RM)"
                 << setw(10) << "Amount (RM)\n";
            
            double total = 0.0;
            for (int i = 0; i < numProduct; i++){
                cout << (i+1) << "\t" << prod[i].getName()
                     << "\t" << prod[i].getCategory()
                     << "\t" << prod[i].getQuantity()
                     << "\t" << showpoint << setprecision(2) << prod[i].getPrice()
                     << "\t" << showpoint << setprecision(2) << prod[i].getPrice()*prod[i].getQuantity();
                total += (prod[i].getPrice()*prod[i].getQuantity());
            } 

            cout << "\n\nTotal price = " << showpoint << setprecision(2) << total;
        }
};

//main function [DON'T CHANGE]
int main(){
    Customer cust("Amir", "Jalil", "Masai, Johor");
    Product p1("Jacob", "Biscuit", 14.8);
    Product p2("Twister", "Drink", 7.5);
    Product p3("Ayamas", "Nugget", 18.4);
    Product p4("Oreo", "Biscuit", 3.8);

    cust.buy(p4, 5);
    cust.buy(p2, 4);
    cust.buy(p3, 2);
    cust.buy(p1, 3);
    cust.print();

    return 0;
}