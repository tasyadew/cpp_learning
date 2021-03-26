#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream testFile("text.txt");

    if(testFile.is_open())
        testFile << "Hi can this work? lol can laaa";
    else
        cout << "Something's wrong";
    testFile.close();
}