/************************************************************************
Name: Natasya Nadhira Binti Ahmad Nazrain
Matrics No.: A20EC0103
Course code: SECJ1013-09

Input and Output Exercise - Slide #26
cin manipulate - use getline()
************************************************************************/

#include<iostream>
using namespace std;

int main(){
  int size = 30;
  char name[30], address1[30], address2[30];
  cin.getline(name, size);
  cin.getline(address1, size);
  cin.getline(address2, size);
  cout << name << endl << address1 << endl << address2;

  return 0;
}
