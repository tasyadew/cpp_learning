/*************************************************************************
In this challenge, write a program that takes in three arguments, a start
temperature (in Celsius), an end temperature (in Celsius) and a step size.
Print out a table that goes from the start temperature to the end temperature,
in steps of the step size; you do not actually need to print the final end
temperature if the step size does not exactly match.

You should perform input validation:
do not accept start temperatures less than a lower limit
(which your code should specify as a constant) or higher than an upper limit
(which your code should also specify). You should not allow a step size greater
than the difference in temperatures.

(This exercise was based on a problem from C Programming Language).
*****************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

const int LIMIT = 0;
const int MAX = 1000;

void input(float&, float&, float&);
float converter(float);

int main(){
  float val1, val2, val3;
  input(val1, val2, val3);

  if(val1>=LIMIT && val2<=MAX){
    if(val3 < (val2 - val1)){
      cout << "Celsius\t\tFahrenheit\n";
      cout << "-------\t\t----------\n";
      for(int i = val1; val1 <= val2; val1 += val3){
        cout << fixed << showpoint << setprecision(6);
        cout << left << setw(15) << val1 <<"\t"<< converter(val1) << "\n";
      }
    }
    else{
      cout<<"step size cannot be greater than the difference in temperatures.";
    }
  }
  else{
    cout<<"Invalid range";
  }

  return 0;
}

void input(float&initTemp, float&finalTemp, float&stepSize){
  cout << "Please give in a lower limit, limit >= " << LIMIT << ": ";
  cin >> initTemp;
  cout << "Please give in a higher limit, " << initTemp
       << " < limit <= "<< MAX <<": ";
  cin >> finalTemp;
  cout << "Please give in a step, " << LIMIT << " < step <= "
       << finalTemp <<": ";
  cin >> stepSize;
}

float converter(float c){
  float f;
  f = (c*(9.00/5.00)) + 32.00;
  return f;
}
