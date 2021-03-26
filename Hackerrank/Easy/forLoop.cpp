#include <iostream>
#include <cstdio>
using namespace std;

void word (int x);

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    
    for(int k=a; k<=b; k++ ){
        if(k>=1 && k<=9){
            word(k);
            cout << endl;
        }
        else if(k>9 && k%2==0){
            cout << "even"<<"\n";
        }
        else{
            cout << "odd"<<"\n";
        }
    }
    return 0;
}

void word (int x){
    switch (x) {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    }
}
