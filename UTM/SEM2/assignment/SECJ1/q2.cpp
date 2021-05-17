/*
    Name: Natasya Nadhira Binti Ahmad Nazrain
    Matric No: A20EC0103
    Course: SECJ1023-08

    Assignment 1, Question 3
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//CLASS

class ProjectSupervisor{
    private:
        string ps_name;
    public:
        ProjectSupervisor()
            {ps_name = "";}
        void set_ps(string ps)
            {ps_name = ps;}
        string get_ps()
            {return ps_name;}
};

class AcademicAdvisor{
    private:
        string aa_name;
    public:
        AcademicAdvisor()
            {aa_name = "";}
        void set_aa(string aa)
            {aa_name = aa;}
        string get_aa()
            {return aa_name;}
};

class Project{
    private:
        string p_name;
    public:
        Project()
            {p_name = "";}
        void set_project(string p)
            {p_name = p;}
        string get_project()
            {return p_name;}
};


class Student{
    private:
        string s_name;
        string program;
    public:
        Project p;
        AcademicAdvisor aa;
        ProjectSupervisor ps;
        Student(){
            s_name = "";
            program = "";
        }
        void set_name(string n)
            {s_name = n;}
        void set_program(string p)
            {program = p;}
        string get_name()
            {return s_name;}
        string get_program()
            {return program;}
};



//MAIN

int main(){

    //variables
    const int SIZE = 100;   //max capacity of array is 100 elements
    string name[SIZE], program[SIZE], aa[SIZE], ps[SIZE], project[SIZE];

    ifstream inputFile ("pgstudents.txt");

    //Read file
    int num = 0;    //capacity indicated in the input file
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

    //Initialize dynamic student array
    Student* s = new Student[SIZE];

    //Allocate to students array
    for (int j = 0; j < SIZE; j++){
        s[j].set_name(name[j]);
        s[j].set_program(program[j]);
        s[j].aa.set_aa(aa[j]);
        s[j].ps.set_ps(ps[j]);
        s[j].p.set_project(project[j]);
    }

    //Output
    ofstream outFile("output.txt");
  
    outFile << "THE LIST OF POSTGRADUATE STUDENTS\n"; 
    outFile << left << setw(3) << "No";
    outFile << left << setw(30) << "Name";
    outFile << left << setw(30) << "Supervisor";
    outFile << "Project\n\n";

    //loop content
    for (int k = 0; k < num; k++){  //num is the total specified in the input file
        outFile << left << setw(3) << k+1;
        outFile << left << setw(30) << s[k].get_name();
        outFile << left << setw(30) << s[k].ps.get_ps();
        outFile << left << setw(50) << s[k].p.get_project() << endl;
    }

    //close file and delete array
    outFile.close();

    delete [] s;
    s = NULL;

    return 0;
}
