/*------------------------------------------------------------------------------

    This program is made for final project and was written by
    - Nabil Alkahar             (A20EC0281)
    - Anas Ehab Nafei Mohamed   (A20EC0260)
    - Irsyad Ros Bin Hisyam Ros (A20EC0052)

    SHORT DESCRIPTION OF PROGRAM HERE
    - 
    - 
    - 
    - 
    
    Notes:
    1) If you got an error "sh:1: CLS: not found", ctrl+F for "Note 1"
    
--------------------------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

/*---Prototype Declaration------------------------------------------------*/
class Address;
class Business;
class Customer;
class Owner;
class Person;
class Pharmacy;
class Product;
class ServiceProvider;
class SuperMarket;
class Worker;

string drawLine(int);
string centered(string, int);
bool startMenu();
void loginOwnerMenu();
void loginWorkerMenu();
void loginCustomerMenu();
void signUpMenu();

/*---Global Variable Declaration------------------------------------------------*/
Person* arrPerson[20];
int arrOwner[20];   //Used to store the position of Owners in Person array 
int arrWorker[20];  //Used to store the position of Workers in Person array 
int arrCustomer[20];//Used to store the position of Customers in Person array 
int amountPerson = 0;
int amountOwner = 0;
int amountWorker = 0;
int amountCustomer = 0;


/*---Class Declaration----------------------------------------------------------*/
/*
class Address {
    
};

class Person {
    
};

class Customer {
    
};

class Worker {
    
};

class Owner {
    
};

class Business {
    
};

class Pharmacy {
    
};

class SuperMarket {
    
};

class ServiceProvider {
    
};

class Product {
    
};
*/

/*---Function Declaration-------------------------------------------------------*/
//General:
string drawLine(int size) {
    string str = "";

    for (int i = 0; i < size; i++)
        str += "-";

    return str;
}

string centered(string str, int size) {
    string finalStr = "";
    int totalSpaces = size - str.length(); //Calculate amount of " " to be added in total
    int leftSpacing = floor(totalSpaces / 2); //Calculate amount for only one side
    
    /*Assume that the str = "Hello" and the size = 9.
    Spaces will be shown as "-" for example output purpose only. */
    for (int i = 0; i < leftSpacing; i++)
        finalStr += " "; // Output: "----"
    
    finalStr += str; // Output: "----Hello"
    
    for (int i = 0; i < leftSpacing + (totalSpaces%2); i++)
        finalStr += " "; // Output: "----Hello-----"
    /* Note: +(totalSpaces%2) can be understood as:
    "If total space is odd, then add an extra space to right side" */
    
    return finalStr;
}

//Menu:
bool startMenu(){
    cout<< drawLine(36) << endl
        << centered("START MENU",36) << endl
        << drawLine(36) << endl
        << "[1] Log in as Business Owner" << endl
        << "[2] Log in as Worker" << endl
        << "[3] Log in as Customer" << endl
        << "[4] Sign up" << endl
        << "[5] Exit" << endl
        << drawLine(36) << endl
        << endl
        << "Input: ";
    
    int x;
    cin >> x;
    cout<< endl;
    
    /*Note 1: If you got an error "sh:1: CLS: not found", then you are probably not on Windows.
    To fix this error, ctrl+F to replace "system("CLS");" with "system("clear");" instead.
    Otherwise, you could (hopefully) just comment out/remove each instance of it*/
    system("cls");
    
    switch (x) {
        case 1:
            loginOwnerMenu();
            return true; //Go back to start of showMenu() again.
        case 2:
            loginWorkerMenu();
            return true; //Go back to start of showMenu() again.
        case 3:
            loginCustomerMenu();
            return true; //Go back to start of showMenu() again.
        case 4:
            signUpMenu();
            return true; //Go back to start of showMenu() again.
        default:
            return false; //Stops the loop in main function and exits the program
    }
}

void loginOwnerMenu(){
    cout<< drawLine(36) << endl
        << centered("Log in as Business Owner",36) << endl
        << drawLine(36) << endl;
    
    if (amountOwner > 0){
        for (int i=0; i<amountPerson; i++){
            
        }
    } else {
        cout<< endl
            << centered("No users found in system!",36) << endl
            << centered("Press any key to exit",36) << endl
            << endl
            << drawLine(36) << endl
            << endl
            << "Input: ";
        
        string ignored;
        cin >> ignored;
        cout<< endl;
        system("cls"); //Refer "Note 1".
        return;
    }
}

void loginWorkerMenu(){
    cout<< drawLine(36) << endl
        << centered("Log in as Worker",36) << endl
        << drawLine(36) << endl;
    
    if (amountWorker > 0){
        for (int i=0; i<amountPerson; i++){
            
        }
    } else {
        cout<< endl
            << centered("No users found in system!",36) << endl
            << centered("Press any key to exit",36) << endl
            << endl
            << drawLine(36) << endl
            << endl
            << "Input: ";
        
        string ignored;
        cin >> ignored;
        cout<< endl;
        system("cls"); //Refer "Note 1".
        return;
    }
}

void loginCustomerMenu(){
    cout<< drawLine(36) << endl
        << centered("Log in as Customer",36) << endl
        << drawLine(36) << endl;
    
    if (amountCustomer > 0){
        for (int i=0; i<amountPerson; i++){
            
        }
    } else {
        cout<< endl
            << centered("No users found in system!",36) << endl
            << centered("Press any key to exit",36) << endl
            << endl
            << drawLine(36) << endl
            << endl
            << "Input: ";
        
        string ignored;
        cin >> ignored;
        cout<< endl;
        system("cls"); //Refer "Note 1".
        return;
    }
}

void signUpMenu(){
    cout<< drawLine(36) << endl
        << centered("Sign Up Menu",36) << endl
        << drawLine(36) << endl;
    
    if (false){ //if (amountPerson < 20){
        
    } else {
        cout<< endl
            << centered("You can't sign up!",36) << endl
            << centered("Max amount of users added.",36) << endl
            << centered("Press any key to exit",36) << endl
            << endl
            << drawLine(36) << endl
            << endl
            << "Input: ";
        
        string ignored;
        cin >> ignored;
        cout<< endl;
        system("cls"); //Refer "Note 1".
        return;
    }
}

/*---Main Function--------------------------------------------------------------*/
int main(){
    //Loops until user [4]Exit the program from startMenu().
    bool sentinel = true;
    while (sentinel){
        sentinel = startMenu();
    }
    
    cout<< drawLine(36) << endl
        << centered("Thank you for using our services!",36) << endl
        << centered("See you soon! :D",36) << endl
        << drawLine(36) << endl
        << endl;
    
    cin.ignore();
    string ignored;
    getline(cin,ignored);
    return 0;
}
