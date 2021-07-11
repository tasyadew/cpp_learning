#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter 2 numbers : ";
    cin >> n1 >> n2;

    try{
        if (n2 == 0)
            throw 1;
        cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
    }

    catch(string x){
        cout << "Error" << endl;
    }

    catch(...){
        cout << "Error: Cannot divide by 0" << endl;
    }

    return 0;
}