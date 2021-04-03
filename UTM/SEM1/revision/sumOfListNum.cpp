#include <iostream>
using namespace std;

int solve(int a, int b);

int main(){
    //var
    int num1, num2, display;

    //ask user input
    cout << "Enter the starting number, m => ";
    cin >> num1;
    cout << "Enter the ending number, n => ";
    cin >> num2;

    //display ans
    display = solve(num1, num2);
    cout << "\nThe sum is " << display;
}

int solve(int a, int b){
    int ans=0;

    if(a<b){
        for(int x=a; x<=b; x++){
            ans+=x;
        }
    }
    else if(a>b){
        for(int x=b; x<=a; x++){
            ans+=x;
        }
    }
    else
        ans = a;

    return ans;
}