#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            {return false;}
 
    return true;
}

void resetInput(){
    //reset value
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //re-enter value
    cout << "Re-enter input : ";
}
 

int validateInput(string input){
    cin >> input;
    int value;
    stringstream ss;

    while(!(isNumber(input)) || input == "0"){  //loop until get valid integer
        cout << "ERROR: input is not and integer or cannot be negative value or 0\n";
        resetInput();
        cin >> input;
    }
    //convert string to int
    ss << input;
    ss >> value;
    return value;
}
 /*
    if (isNumber(input)){ //true if valid integer
        ss << input;
        ss >> value;
    }else{ //loop until get valid input
        cout << "String";
    }

    return value;
        //checking if it is number or not

        if(cin.good()){
            cout << "ERROR: input is not an integer!\n";
            //reset value
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            //re-enter value
            cout << "Re-enter input : ";
            cin >> input;
        }else if(!(cin.good())){

        }
        else{
            //change input to type int
            ss << input;
            ss >> value;
            loop = false;
        }
    }
    
    while (!(cin.good())){    //fail input
        //Output related error message
        if(!(cin.good())){
        cout << "ERROR: input is not an integer!\n";
        }
        if(input < 0){
            cout << "ERROR: input must be a positive value!\n";
        }
        if(input == 0){
            cout << "ERROR: input cannot be 0!\n";
        }

        //reset value
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //re-enter value
        cout << "Re-enter input : ";
        cin >> input;
    }
    */


int main(){
    //cout << "This program is to apply numerical differentiation.\n\n";
    //getInput();
    int a;
    string s;
    cout << "Enter : ";
    a = validateInput(s);
    cout << "a is " << a;

    return 0;
}