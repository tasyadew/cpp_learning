#include <iostream>
using namespace std;

class Employee{
    protected:
        string name;
        double salary;

    public:
        Employee(string name, double  salary){
            this->name=name;
            this->salary=salary;
        }
        virtual void getDetails()=0;
};

class Manager:public Employee{
    private:
        int level;
    public:
        Manager(string name, double  salary,int level): Employee(name,salary){
            this->level=level;
        }
        void getDetails(){
            cout<<" Name:"<<name<<", Salary:$"<<salary<<",Level:"<<level<<endl;
        } 
};

class Developer:public Employee{
    private:
        string progType;
    public:
        Developer(string name, double  salary,string progType): Employee(name,salary){
            this->progType=progType;
        }
        void getDetails(){
            cout<<"Name:"<<name<<",Salary:$"<<salary<<",Specialization: "<<progType<<endl;
        } 
};

void display(Employee* E){
    E->getDetails();
}

int main(){
    Manager m("Alex",5000,2);
    m.getDetails();
    Developer d("John",2000,"C++");
    d.getDetails();
    return 0;
}