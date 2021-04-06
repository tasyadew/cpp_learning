#include<iostream>
#include<cstring> //for strlen
#include<cctype> //for toupper & tolower
using namespace std;

int main(){
    const int SIZE = 20;
    char arr[SIZE];
    int l1, l2;

    cout << "Enter string lower than " << SIZE - 1 << " : ";
    cin.getline(arr,SIZE);

    //trying strcat
    //char greet[SIZE]= "Hello ";
    //strcat(greet, arr);
 
    //strlen don't count \0 as a char.
    l1 = strlen(arr); //output length of string
    //l2 = strlen(greet);

    //change char[] to string
    string s1 ="";
    for(int x=0; x<l1; x++)
        s1+=arr[x];

    //display
    cout << "Arr length " << l1 << endl;
    //cout << "Greet length " << l2 << endl;
    cout << "Arr length but as a string " << s1.length() << endl;
    //cout << greet << endl;
    //cout << "\nString is " << arr[19];
    cout << s1;
    //cout << "\nAll lowercase: " << tolower(s1);
    //cout << "\nAll uppercase: " << toupper(s1);
}