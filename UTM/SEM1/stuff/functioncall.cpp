#include<iostream>
using namespace std;
void showSum(int, int, int);

int main(){
  int value1, value2, value3;

  cout<< "Enter 3 integers: ";
  cin>> value1>>value2>>value3;
  showSum(value1, value2, value3);

  return 0;
}

void showSum(int a, int b, int c){
  cout<<"The sum: "<< a+b+c;
}
