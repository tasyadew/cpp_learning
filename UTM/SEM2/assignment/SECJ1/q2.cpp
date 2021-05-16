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

    //Read file
    ifstream inputFile ("pgstudents.txt");
    int n = 0;  //number of students
    inputFile >> n;
    const int SIZE = n;

    Student* s[100] = new Student;

    //placeholder variable
    string name, program, advisor, supervisor, project;

    while(!inputFile.eof()){
        for (int i = 0; i < SIZE; i++){
            inputFile.ignore();
            s[i]->set_name(getline(inputFile, name));
        }
    }

    


    return 0;
}
