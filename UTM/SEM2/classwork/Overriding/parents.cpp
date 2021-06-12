#include <iostream>
using namespace std;

class Parents{
    public:
        void display(){
            cout << "I am a parent\n";
        }
};

class Mother : public Parents{
    public:/*
        void display(){
            cout << "I am a mother\n";
        }    */
};

class Father : public Parents{
    public:
        void display(){
            cout << "I am a father\n";
        }    
};

int main(){
    Parents p;
    p.display();

    Mother m;   
    m.display(); //child class can access parent's class of same method

    Father f;
    f.display();
}