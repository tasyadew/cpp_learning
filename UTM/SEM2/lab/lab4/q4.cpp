//Program 8.9
#include <iostream>
using namespace std;

class B{
    private:
        int k;
    
    protected:
        int i;
        int j;
        void printMe();
    
    public:
        B(int j) {
            this->j=j;
        }
        
        void changeValue(int);
};

void B::printMe(){
    cout << "i:" << i << " j:" << j << " k:" << k << endl;
}

void B::changeValue(int j){
    this->j=j;
}

class C:public B{
    private:
        int j;
    
    public:
        C(int value){
            i = 6;
            j = 10;
        }
        void printMe();
    
    //protected:
        void changeValue(int);
};

void C::printMe(){
    B::printMe();
    cout << "j: " << j;
}

void C::changeValue(int j){
    B::changeValue(j);
    this->i=25;
}

int main(){
    C obj(12);
    obj.changeValue(45);
    obj.printMe();
}