#include <iostream>
#include <string>
using namespace std;

const int CUR_YEAR = 2021;
const int N = 3;

class Cat{
    private:
        string name;
        int age, yearAdopt;
    public:
        Cat(string name = "", int age = 0, int yearAdopt = 0){
            this->name = name;
            this->age = age;
            this->yearAdopt = yearAdopt;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        int calcNumOfYear(){
            return CUR_YEAR-yearAdopt;
        }

};

class Person{
    private:
        string name, address;
        int count;
        Cat *myCat;
    public:
        Person(string n, string a){
            name = n;
            address = a;
            count = 0;
            myCat = new Cat[N];
        }

        void adopt(Cat c){
            if(count < N){
                cout << "Successfully adopt...\n";
                myCat[count] = c; 
                ++count;
            }else{
                cout << "Sorry, reached max\n";
            }
        }

        void print(){
            cout << name << endl;
            cout << address << endl;

            for (int i = 0; i < count; i++){
                cout << (i+1) << "\t" << myCat[i].getName()
                     << "\t" << myCat[i].getAge()
                     << "\t" << myCat[i].calcNumOfYear() << endl;
            }
        }

};

int main(){
    Person p("Lizza", "UTM");
    Cat c1("Pushi", 1, 2020);
    Cat c2("Cutie", 2, 2018);
    Cat c3("King", 2, 2017);
    Cat c4("Comel", 2, 2019);

    p.adopt(c1);
    p.adopt(c2);
    p.adopt(c3);
    p.adopt(c4);

    p.print();
}