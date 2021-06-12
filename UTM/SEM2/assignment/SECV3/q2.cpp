/*
 * ================= GROUP 2 =======================
 * Group Members:
 * 1) Natasya Nadhira Binti Ahmad Nazrain
 * 2) Tee Jun Hong
 * 3) Debbie Low Tzi Wei
 * 4) Hafiz Surya Nugraha
 * 
 * Course Code: SECV1113-01 
 * Assignment 3, Question 2
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

const double PI = 3.141592;

//function prototype
void menu();
void solve1();
void solve2();

int main(){

    menu();
    int input;
    cin >> input;

    //call appropiate fuction by user input
    while (input != 3){
        switch(input){
            case 1:
                solve1();
                break;
            case 2:
                solve2();
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
    cout << "This program will calculate Vector\n";
    cout << "1) Calculate 2 points\n";
    cout << "2) Calculate 2 vectors\n";
    cout << "3) Exit\n";
    cout << "Choose (1, 2, or 3) => ";
}

void solve1(){
    //variables
    double x1, y1, z1; //point A
    double x2, y2, z2; //point B
    double vx, vy, vz ,vm; //vector AB

    //ask user input
    cout << "\nPlease enter 2 points, A and B:";
    cout << "\nFor point A(x1, y1, z1)\n";
    cout << "x1 => ";
    cin >> x1;
    cout << "y1 => ";
    cin >> y1;
    cout << "z1 => ";
    cin >> z1;
    cout << "\nFor point B(x2, y2, z2)\n";
    cout << "x2 => ";
    cin >> x2;
    cout << "y2 => ";
    cin >> y2;
    cout << "z2 => ";
    cin >> z2;    

    //calculation vector AB
    vx = x2 - x1;
    vy = y2 - y1;
    vz = z2 - z1;

    //calculation magnitude
    vm = sqrt(pow(vx,2) + pow(vy,2) + pow(vz,2));

    //display
    cout << "\nVector AB in component form: [ " << vx << ", " << vy << ", " << vz << " ]\n";
    cout << "Magnitude: " << fixed << setprecision(2) << vm << endl;
    cout << "Vector unit: [ " << vx/vm << ", " << vy/vm << ", " << vz/vm << " ]\n\n"; 
}

void solve2(){
    //variables
    double p, q, r, b; //vector P
    double m, n, o, a; //vector Q
    double i, j, k; //for aQ-bP
    double vi, vj, vk; //vector multiplication
    double mpq, mp, mq, angle; //for finding angle

    //ask user input
    cout << "\nPlease enter 2 vectors, P and Q:";
    cout << "\nFor vector P(pi + qj + rk)\n";
    cout << "p => ";
    cin >> p;
    cout << "q => ";
    cin >> q;
    cout << "r => ";
    cin >> r;
    cout << "\nFor vector Q(mi + nj + ok)\n";
    cout << "m => ";
    cin >> m;
    cout << "n => ";
    cin >> n;
    cout << "o => ";
    cin >> o;
    cout << "\nFor aQ-bP\n";
    cout << "a => ";
    cin >> a;
    cout << "b => ";
    cin >> b;

    //calculation aQ - bP
    i = (a*m) - (b*p);
    j = (a*n) - (b*q);
    k = (a*o) - (b*r);

    //calculate P x Q
    vi = (q*o) - (n*r);
    vj = (r*m) - (o*p);
    vk = (p*n) - (m*q);

    //calculate angle
    mpq = sqrt(pow(vi, 2) + pow(vj, 2) + pow(vk, 2)); // |PxQ|
    mp = sqrt(pow(p, 2) + pow(q, 2) + pow(r, 2));
    mq = sqrt(pow(m, 2) + pow(n, 2) + pow(o, 2));
    angle = asin(mpq / (mp*mq)); //in radian
    angle = angle * 180.0 / PI; //convert to degree

    //display
    cout << "\naQ - bP = " << i << "i + " << j << "j + " << k << "k\n";
    cout << "P x Q = " << vi << "i + " << vj << "j + " << vk << "k\n";
    cout << "Angle between vector P and vector Q is " << angle << " degree\n\n";
}