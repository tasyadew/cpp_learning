/************************************************************
4. Restaurant Bill
Write a program that computes the tax and tip on a restaurant 
bill for a patron with a $88.67 meal charge. The tax should be 
6.75 percent of the meal cost. The tip should be 20 percent of 
the total after adding the tax. Display the meal cost, tax amount, 
tip amount, and total bill on the screen.
*************************************************************/

#include<iostream>
using namespace std;

int main(){
    float mealCost, taxCost, tipCost, totalBill;

    //collect data
    cout << "Enter meal cost: ";
    cin >> mealCost;

    cout << "Enter tax percent: ";
    cin >> taxCost;

    cout << "Enter tip percent: ";
    cin >> tipCost;

    //change percent to decimal
    taxCost = static_cast<float>(taxCost)/100;
    tipCost = static_cast<float>(tipCost)/100;

    //calc totalBill
    totalBill = (mealCost*taxCost) + (mealCost*tipCost) + mealCost;

    //Display result
    cout << "\nMeal cost is " << mealCost;
    cout << "\nTax amount is " << mealCost*taxCost;
    cout << "\nTip amount is " << mealCost*tipCost;
    cout << "\nTotal bill is " << totalBill;



}