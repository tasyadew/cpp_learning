#include <iostream>
using namespace std;

int main(){
  int value1 = 7;
  int value2 = 7;
  int *ptr1 = &value1;
  int *ptr2 = &value2;

  if (*ptr1==*ptr2){
    cout << "Pointers are Equal";
  }
  else {
    cout << "Pointers are Equal";
  }
  return 0;
}
