/*
    Name: Natasya Nadhira Binti Ahmad Nazrain
    Matric No: A20EC0103
    Course: SECJ1023-08

    Assignment 1, Question 3
*/

#include <iostream>
#include <string>
using namespace std;

//CLASS

class Car
{
    private:
        string plate;   
    public:
        Car(string p)
        {
            plate = p;
        }
        string getPlate()
        {
            return plate;
        }
};

class Contact
{
    private:
        string phone;
    public:
        Contact(string p)
        {
            phone = p;
        }
        string getPhone()
        {
            return phone;
        }
};

class Customer
{
    private:
        string name;
    public:
        Contact* contactptr;
        Car* carptr;
        Customer(string n, string c)
        {
            name = n;
            contactptr = new Contact(c);
            carptr = NULL;
        }
        string getName()
        {
            return name;
        }
        string getPhoneNum()
        {
            return contactptr->getPhone();
        }
};



//MAIN

int main()
{
    const int SIZE = 2;     //array size
    Car car1("JSQ245");     //create car object
    Customer custArr[SIZE] =    //array of customers
    {
        {"Ahmad Kamal","015-75769800"},
        {"Siti Nurdiana Abdullah","014-8889900"}
    };
    
    custArr[0].carptr = &car1;  //point obj car1 to first customer's car

    //Loop Output
    for (int i = 0; i < SIZE; i++)
    {
        cout<< "Customer's Name: " << custArr[i].getName() << endl
            << "Phone Number: " << custArr[i].getPhoneNum() << endl
            << "Rented Car: ";
        if (custArr[i].carptr != NULL)
        {
            cout << custArr[i].carptr->getPlate();
        }
        cout << endl << endl;
    }
    
    return 0;
}
