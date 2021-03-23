//LOCAL VARIABLES PROGRAM
/*
#include <iostream>
using namespace std;

void showLocal();//prototype

int main(){
  //int localNum = 3;
  showLocal();
  showLocal();
  return 0;
}

void showLocal(){
  int localNum = 5;//local var

  cout << "local num is " << localNum << endl;
  localNum = 99;
  //cout << "local num is " << localNum << endl;
}
*/

//STATIC VARIABLES PROGRAM

#include <iostream>
using namespace std;

void showStatic();//prototype

int main(){
  for (int count = 0; count < 5; count++)
    showStatic();
  return 0;
}

void showStatic(){
  static int statNum;
  //static int statNum = 5;

  cout << "statNum is " << statNum << endl;
  statNum++;
}
