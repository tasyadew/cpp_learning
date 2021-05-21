#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int getInput(){

    int input;
    cin >> input; //input length only one

    //Error Checking
    while(!(cin.good())){
        //reset input
        cout << endl;
        cout << "Input is invalid!\n\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //new input
        cout << "Re-enter input => ";
        cin >> input;
    }
    return input;
}
int main(){
    
    cout << "Enter something : ";
    int x = getInput();
    /*
    while(x!= -1){
        cout << "Enter stuff : ";
        x = getInput(); 
    }
    */
   cout << "x is " << x;
}