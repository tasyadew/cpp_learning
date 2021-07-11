#include <iostream>
using namespace std;

class Grandpa{
	public:
		virtual void print(){
			cout << "I am a Grandpa" << endl;
		}
};

class Dad : public Grandpa{
	public:

};


class Son1 : public Dad{
	public:
		void print(){
		cout << "I am the first Son" << endl;
	}
};

class Son2 : public Dad{
	public:
		void print(){
			cout << "I am the second son" << endl;
		}
};


int main(){
	const int SIZE = 4;
	Son1 Ali, Abu;
	Son2 Zack, Zoe;
	Grandpa *grandson[SIZE] = {&Ali, &Zack, &Abu, &Zoe};

	for (int i = 0; i < SIZE; i++){
		grandson[i]->print();
	}
	return 0;
}