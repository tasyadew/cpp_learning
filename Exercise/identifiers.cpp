// to test diff identifies name

#include<iostream>
using namespace std;

int main(){
  int TotalSales =1;
  cout << TotalSales;

}

/*****************************************************
Testing variable        valid?
(1) totalSales           yes
(2) total_Sales          yes
(3) total.Sales          no
(4) 4thQtrSales          no (cannot begin with number)
(4.5) _4thQtrSales       yes
(5) totalSales$          no (special character)
(6) TotalSales           yes
******************************************************/
