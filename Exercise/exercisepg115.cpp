//blue question
#include <iostream>
using namespace std;

void showVar();

int main(){
  for (int count = 0; count<10; count++)
  showVar();
  system("pause");
  return 0;
}

void showVar(){
  static int var = 10;
  cout << var << endl;
  var++;
}

//yellow question
