/************************************************************************
Name: Natasya Nadhira Binti Ahmad Nazrain
Matrics No.: A20EC0103
Course code: SECJ1013-09

Input and Output Exercise - Slide #18
************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  double val = 10.345;
  cout << setprecision(5) << val << endl;
  cout << setprecision(5) << val << endl;
  cout << setprecision(5) << val << endl;
  cout << setprecision(5) << val << endl;
  cout << setprecision(5) << val << endl;
  cout << "Apa Khabar \n Semua \n" << endl;
  cout << setw(6) << val*5 << endl;
  cout << showpoint << fixed << setw(8) << val << endl;
  return 0;
}
