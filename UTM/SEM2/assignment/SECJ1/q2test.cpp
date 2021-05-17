#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int SIZE = 2;

int main(){

    //variables
    int num = 0;
    string name[SIZE], program[SIZE], aa[SIZE], ps[SIZE], project[SIZE];

    ifstream inputFile ("pgstudents.txt");

    //Read file
    inputFile >> num;
    inputFile.ignore();
    int i = 0;
    while (!inputFile.eof()){

        inputFile.ignore(256, '\n');
        getline(inputFile, name[i]);
        getline(inputFile, program[i]);
        getline(inputFile, aa[i]);
        getline(inputFile, ps[i]);
        getline(inputFile, project[i]);

        i++;
    }

    //Output
    ofstream outFile("output.txt");
  
    outFile << "THE LIST OF POSTGRADUATE STUDENTS\n"; 
    outFile << left << setw(3) << "No";
    outFile << left << setw(30) << "Name";
    outFile << left << setw(30) << "Supervisor";
    outFile << "Project\n\n";

    //loop content
    for (int j = 0; j < SIZE; j++){
        outFile << left << setw(3) << j+1;
        outFile << left << setw(30) << name[j];
        outFile << left << setw(30) << ps[j];
        outFile << left << setw(50) << project[j] << endl;
    }

    outFile.close();

    return 0;
}
