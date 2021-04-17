#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct Employee{
    string name;
    string department;
    double salary;
    int otHours;
    double otPay;
    double totalPay;
};

//prototype
int readInput(Employee e[]);

//main
int main(){
    Employee emp[50];
    int total = readInput(emp); //total employee
    cout << total;
    cout << emp[1].name;
    return 0;
}

int readInput(Employee e[]){

    int employeeNum=0;
    ifstream inFile;
    string line;

    //file opening status
    inFile.open("input.txt");
    if(!inFile){
        cout << "Error opening file.";
    }

    //finding total line of txt
    while(getline(inFile, line)){
        employeeNum++;
    }

    //reading data
    for(int i=0; i<employeeNum; i++){
        inFile >> e[i].department >> e[i].salary >> e[i].otHours;
        getline(inFile, e[i].name);
    }

    return employeeNum;
}