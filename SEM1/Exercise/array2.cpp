#include<iostream>
#include<iomanip>
using namespace std;

int main(){
/*
  int value[5] = {2,6,10,14};
  int x = 2;

  cout << value[2] << endl
       << ++value[0] << endl
       << value[1]++ << endl
       << value [++x] << endl
       << value[5];
*/

//  int num[5] = {1,2,3};
//  cout << num[3];

  double balance[5] = {100.0, 250.0, 325.0, 500.0, 1100.0};
  const double INTRATE = 0.1;
  cout <<fixed<< showpoint << setprecision(2);
  for (int count = 0; count < 5; count++)
  cout << (balance[count] * INTRATE) << endl;
}
