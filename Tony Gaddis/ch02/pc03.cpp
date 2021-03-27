/************************************************************
##Sales Tax
Write a program that will compute the total sales tax 
on a $95 purchase. Assume the state sales tax is 4 percent 
and the county sales tax is 2 percent.
*************************************************************/

#include<iostream>
using namespace std;

int main(){
    float salesTax, countryTax, totalTax, price;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter sales tax: ";
    cin >> salesTax;

    cout << "Enter country tax: ";
    cin >> countryTax;

    //change to decimal
    salesTax = static_cast<float>(salesTax)/100;
    countryTax = static_cast<float>(countryTax)/100;

    //calculate total tax
    totalTax = price*salesTax + price*countryTax;

    cout << "Price after tax is " << price-totalTax;

    

}