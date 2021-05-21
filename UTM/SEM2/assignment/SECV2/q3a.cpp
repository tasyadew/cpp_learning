/*
 * ================= GROUP 2 =======================
 * Group Members & Matric Number:
 * 1) Natasya Nadhira Binti Ahmad Nazrain
 * 2) Tee Jun Hong
 * 3) Debbie Low Tzi Wei
 * 4) Hafiz Surya Nugraha
 * 
 * Course Code: SECV1113-01 
 * Assignment 2, Question 3 (a)
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

//prototypes
void resetInput();
bool isNumber(string);
int validateInput(string input);
double validateInput(bool, double); //bool true = can accept zero value

int main(){
    cout << "This program is to apply numerical differentiation.\n";
    cout << "The equation f(x) is (a*x^5sqrt(b*x^3+1))/(c*x + d)\n\n";

    //variables
    string s;               //temporary input
	int num;                //must be positive int and not equal to zero. For no of point
	double a,b,c,d,x0,xb;   //decimal number
    double h;               //cannot be zero. can be +ve and -ve.
    bool confirm;           //confirmation on input data
    

    //ask user input
    do{
        cout << "Enter the value of a : " ;
        a = validateInput(true, a);
        cout << "Enter the value of b : ";
        b = validateInput(true, b);
        cout << "Enter the value of c : ";
        c = validateInput(true, c);
        cout << "Enter the value of d : ";
        d = validateInput(true, d);
        while(d==0 && c==0){    //both c and d cannot be 0
            cout << "Error: Value of c and d can't be 0!\n";
            cout << "Enter the value of c : ";
            c = validateInput(true, c);
            cout << "Enter the value of d : ";
            d = validateInput(true, d);
        }
        cout << "Enter number of points to be generated : ";
        num = validateInput(s); 
        cout << "Enter value of h : ";
        h = validateInput(false, h);
        cout << "Enter the value of x0 : ";
        x0 = validateInput(true, x0);

        cout << "\n\nThese are the entered inputs\n";
        cout << "input a is " << a << endl; 
        cout << "input b is " << b << endl; 
        cout << "input c is " << c << endl; 
        cout << "input d is " << d << endl; 
        cout << "input number of points to be generated is " << num << endl; 
        cout << "input h is " << h << endl; 
        cout << "input x0 is " << x0 << endl; 
        cout << "Are all the values entered correct? Enter 1 if yes, 0 if no: ";
        cin >> confirm;
    }while(confirm == false); //will loop if enter 0 and reenter new number
    
    //initialize value of xi and f(xi)
	double j=x0;
    double fx;
    double* x = new double[num];
    double* f = new double[num];
	fx=((a*pow(x0,5))*sqrt((b*pow(x0,3))+1))/((c*x0)+d);

	cout << fixed << showpoint << setprecision(2);
	int i=0;
	do{
		x[i] = x0;
		x0=x0+h;
		i++;
	}while(i<num);

	x0=j;
	i=0;
	cout << fixed << showpoint << setprecision(6);
	do{
		fx=((a*pow(x0,5))*sqrt((b*pow(x0,3))+1))/((c*x0)+d);
        f[i] = fx;
		x0=x0+h;
		i++;
	}while(i<num);
	cout<<endl;

    cout << left << setw(10) << "x" << "f(x)\n";
    for (int i = 0; i < num; i++){
        cout << left << setw(10) << fixed << setprecision(4) << x[i] << setprecision(6) << f[i] << endl;
    }

	cout<<"enter value of point x=b: ";
	cin>>xb;
	double x1 = xb+h;
    double x2 = xb-h;
       if((c*x1)+d==0 || (c*x2)+d==0){
           cout << "f(x) is not differentiable at point x= " <<xb;
           cout<<"enter value of point x=b: ";
		   cin>>xb;
       }
    double f1=((a*pow(x1,5))*sqrt((b*pow(x1,3))+1))/((c*x1)+d);
    double f2=((a*pow(x2,5))*sqrt((b*pow(x2,3))+1))/((c*x2)+d);
    double dif=(f1-f2)/(2*h);
    cout<<"f'("<<xb<<")= "<<dif<<endl;

    delete [] x;
    delete [] f;
    x = NULL;
    f = NULL;

    return 0;
}

//clear previous input
void resetInput(){
    //reset value
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //re-enter value
    cout << "Re-enter input : ";
}

//return true if input is a valid int
bool isNumber(string s){
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            {return false;}
 
    return true;
}

//Checking validation for input of positive integer
int validateInput(string input){
    cin >> input;
    int value;
    stringstream ss;

    while(!(isNumber(input)) || (input == "0" )){  //loop until get valid integer
        cout << "ERROR: input is not and integer or cannot be negative value or 0!\n";
        resetInput();
        cin >> input;
    }
    //convert string to int
    ss << input;
    ss >> value;
    return value;
}

//Checking validation for input of decimal
double validateInput(bool zero, double input){
    cin >> input;
    while (cin.fail() || (zero == false && input == 0) ){   //fail input
        //Output related error message
        if(!(cin.good())){
        cout << "ERROR: input is not a number!\n";
        }
        if(zero == false && input == 0){
            cout << "ERROR: input cannot be 0!\n";
        }
        resetInput();
        cin >> input;
    }
    return input;
}
