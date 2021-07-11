#include<iostream>
using namespace std;

void repeat(); //prototype (Datatype only)
void change5(int&);

int main(){
  int x = 4;
  change5(x);
  cout << x;
  //repeat(); //calling fx (val/var only. void not needed)
}

void change5(int &a){ //UD fx (datatype + var)
  a = 5;
}

void repeat(){ //UD fx (datatype + var)
  int x;
  change5(x);
  for(int i=0; i<x; i++)
    cout << "Test \n";
}
