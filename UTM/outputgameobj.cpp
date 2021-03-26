//this program will output a file name GameObjects.txt
// to use with another program called TasyaSim.cpp

#include<iostream>
#include <fstream>
using namespace std;

//main fx
int main(){
    ofstream gameFile("GameObject.txt");
    
        gameFile << "Singing 0" << endl
        << "Math? -33" << endl
        << "Sleep 99" << endl
        << "Singing -3" << endl
        << "Chatting 39" << endl
        << "Gaming 51" << endl
        << "YouTube 0" << endl
        << "Eating -49" << endl
        << "Texting! 0" << endl;
    gameFile.close();
}

