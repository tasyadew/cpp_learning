#include <string>
#include <iostream>
using namespace std;

// 3 class: Name, Lecturer, Department

//Name: 
/*
    - fisrtname: string
    - lastname: string
    ---------------------------------
    + Name(string fname, string lname)
    + getFullName(): string
*/
class Name{
    private:
        string firstname, lastname;

    public:
        Name(string fname, string lname){
            firstname = fname;
            lastname = lname;
        }

        string getFullName(){
            return firstname + " " + lastname;
        }
};

//Lecturer:
/*
    - name: Name
    - staffId: string
    --------------------------------
    + Lecturer(string fname, string lname, string sId)
    + getLecturer(): string
*/

class Lecturer{
    private:
        Name name;
        string staffId;

    public:
        Lecturer(string fname, string lname, string sId) : name (fname, lname){
            staffId = sId;
        }

        string getLecturer(){
            return name.getFullName() + "\nLecturer id : " + staffId;
        }
};

//Department:
/*
    - lecturerDepart: Lecturer
    ------------------------------------------
    + Department(Lecturer *lectDepart)
    + printDepartment(): void
*/

class Department{
    private:
        Lecturer *lecturerDepart;

    public:
        Department(Lecturer *lectDepart){
            lecturerDepart = lectDepart;
        }
    
        void printDepartment(){
            cout << "Lecturer name: " << lecturerDepart->getLecturer() << endl;
        }
};


//main
int main(){
    Lecturer *lect = new Lecturer("Abdullah", "Hamid", "124");
    Department department(lect);
    department.printDepartment();

    return 0;
}