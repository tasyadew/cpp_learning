/*
 * ================= GROUP 2 =======================
 * Group Members & Matric Number:
 * 1) Natasya Nadhira Binti Ahmad Nazrain
 * 2) Tee Jun Hong
 * 3) Debbie Low Tzi Wei
 * 4) Hafiz Surya Nugraha
 * 
 * Course Code: SECV1113-01 
 * Assignment 1, Question 3 (in degree)
 */


#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

const double PI = 3.141592;

//prototype
void menu();
void solve1();
void solve2();
void solve3();
void solve4();


int main(){

    menu();
    int input;
    cin >> input;

    //call appropiate fuction by user input
    while (input != 5){
        switch(input){
            case 1:
                solve1();
                break;
            case 2:
                solve2();
                break;
            case 3:
                solve3();
                break;
            case 4:
                solve4();
                break;
            default:
                cout << "Input is invalid\n\n";                                            
        }
        system("pause");
        system("cls");

        //ask for new operation
        menu();
        cin >> input; 
    }

    cout << "Closing program...";
    exit(EXIT_SUCCESS);

    return 0;
}

void menu(){
    cout << "========== TRIANGLE SOLVER ==========" << "\n\n";
    cout << "1) Calculate length AC\n";
    cout << "2) Calculate angle ADB in degree\n";
    cout << "3) Calculate angle ABC in degree\n";
    cout << "4) Calculate length BD\n";
    cout << "5) Exit\n\n";
    cout << "Enter an operation => ";
}

void solve1(){
    //ask user input
    double num1, num2, num3, ans=0.0;
    cout << "Enter length AB : ";
    cin >> num1;
    cout << "Enter length BC : ";
    cin >> num2;
    cout << "Enter angle ABC in degree : ";
    cin >> num3;

    //convert degree to radian
    num3 = num3 * PI / 180.0;

    //using cosine rule
    //AC^2 = AB^2 + BC^2 - 2.AB.BC.cos(ABC)
    ans = sqrt(pow(num1,2) + pow(num2,2) - 2*num1*num2*cos(num3)); 
    
    cout << "Length AC is " << ans << "\n\n";
}

void solve2(){
    //ask user input
    double num1, num2, num3;
    double ans = 0.0, temp = 0.0;
    cout << "Enter length DB : ";
    cin >> num1;
    cout << "Enter length BC : ";
    cin >> num2;
    cout << "Enter length CD : ";
    cin >> num3;

    //calculation 
    //use cosine rule
    //BC^2 = DB^2 + CD^2 - 2.DB.CD.cos(BDC)
    //2.DB.CD.cos(BDC) = DB^2 + CD^2 - BC^2
    //cos(BDC) = (DB^2 + CD^2 - BC^2) / (2.DB.CD)
    //BDC = cos^-1((DB^2 + CD^2 - BC^2) / (2.DB.CD))
    temp = (pow(num1,2) + pow(num3,2) - pow(num2,2)) / (2*num1*num3); //cos(BCD)
    temp = acos(temp); //angle BCD in radian

    //convert radian to degree
    temp = temp * 180.0 / PI;

    //angle ADB = 180 - angle BDC
    ans = 180 - temp;

    cout << "Angle ADB is " << ans << " degree" << "\n\n";
}

void solve3(){
    //ask user input
    double num1, num2, num3;
    double ans = 0.0, temp = 0.0;
    cout << "Enter length AB : ";
    cin >> num1;
    cout << "Enter angle BAD in degree : ";
    cin >> num2;
    cout << "Enter length BC : ";
    cin >> num3;

    //convert degree to radian
    num2 = num2 * PI / 180.0;

    // calculation
    // use sine rule
    // BC/sin(BAD) = AB/sin(BCD)
    // sin(BCD) = AB/(BC/sin(BAD))
    // BCD = sin^-1(AB/(BC/sin(BAD)))
    temp = num1/(num3/sin(num2)); //sin(BCD)
    temp = asin(temp); //angle BCD in radian

    //convert radian to degree
    temp = temp * 180.0 / PI;
    num2 = num2 * 180.0 / PI;

    //angle ABC = 180-num2-temp
    ans = 180.0 - num2 - temp;

    cout << "Angle ABC is " << ans << " degree." << "\n\n";
}

void solve4(){
    //ask user input
    double num1, num2, num3;
    double ans = 0.0, temp = 0.0;
    cout << "Enter angle BDC in degree : ";
    cin >> num1;
    cout << "Enter angle BCD in degree : ";
    cin >> num2;
    cout << "Enter length CD : ";
    cin >> num3;

    //DBC = 180 - BDC - BCD
    temp = 180.0 - num1 - num2; 

    //convert degree to radian
    temp = temp * PI / 180.0;
    num2 = num2 * PI / 180.0;

    //calculation
    //use sine rule
    //(CD/sin(DBC)) = (BD/sin(BCD))
    //BD = (CD/sin(DBC)) x sin(BCD)
    ans = (num3/sin(temp)) * sin(num2);
    
    cout << "Length BD is " << ans << "\n\n";
}

