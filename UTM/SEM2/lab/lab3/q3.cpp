#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string studName;
        int studId;
};

class Professor{
    private:
        int numOfTeaching;
        string profName;

    public:
        Professor(string);
        string display();
        ~Professor();
};

class College{
    private:
        string name;
        Professor* prof;
        Student stud;

    public:
        College(string, Professor*);
        ~College();
};
