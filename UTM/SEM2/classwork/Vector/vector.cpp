//from YouTube: https://www.youtube.com/watch?v=iPlW5tSUOUM

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
    private:
        string newName;
        char newGrade;
    public:
        Student(string name, char grade){
            newName = name;
            newGrade = grade;
        }

        //Accessors
        string getName() const {return newName;}
        char getGrade() const {return newGrade;}

        //Mutators
        void setName(string name) {newName = name;}
        void setGrade(char grade) {newGrade = grade;}

};

void fillVector(vector<Student>& newMyClass){
    string name;
    char grade;
    int classSize;

    cout << "How many students are in your class? ";
    cin >> classSize;

    for (int i = 0; i < classSize; i++){
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Grade: ";
        cin >> grade;

        Student newStudent(name, grade);
        newMyClass.push_back(newStudent);
        cout << endl;
    }
}

void printVector(const vector<Student>& newMyClass){
    unsigned int size = newMyClass.size();

    for (unsigned int i = 0; i < size; i++){
        cout << "Student Name: " << newMyClass[i].getName() << endl;
        cout << "Student Grade: " << newMyClass[i].getGrade() << endl << endl;
    }
}

int main(){
    vector<Student> myClass;
    fillVector(myClass);
    printVector(myClass);
    return 0;
}