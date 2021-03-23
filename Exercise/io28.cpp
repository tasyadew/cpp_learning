/************************************************************************
Name: Natasya Nadhira Binti Ahmad Nazrain
Matrics No.: A20EC0103
Course code: SECJ1013-09

Input and Output Exercise - Slide #28
cin manipulate - use cin.get()
************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char name, address1, address2;
  cin.get(name);
  cin.get(address1);
  cin.get(address2);
  cout << name << endl << address1 << endl << address2;
}
