#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Passenger{
    protected:
        string name;
        int age;

    public:
        Passenger(string n = "", int a = 0){
            name = n;
            age = a;
        }

        void printDetails(){ //in table exist. UML dont know where missing
            cout << "Name:\t" << name << "Age:\t" << age;
        }
};

class Kids : public Passenger{
    private:
        string parentName;
    
    public:
        Kids(string n, int a, string pn){
            Passenger pa(n, a);
            parentName = pn;
        }

        void printDetails(){
            cout << "Name:\t" << name << "Age:\t" << age << "Parents Name:\t" << parentName;
        }
};

class Adults : public Passenger{
    private:
        string job;

    public:
        Adults(string n, int a, string j){
            Passenger pa(n, a);
            job = j;
        }

        void printDetails(){
            cout << "Name:\t" << name << "Age:\t" << age << "Job Title\t" << job;
        }
};

class Time{
    private:
        int hour, minute;

    public:
        Time(int h = 0, int m = 0){
            hour = h;
            minute = m;
        }

        int getHour(){return hour;}
        int getMinute(){return minute;}
};

class Flight{
    private:
        string id, destination;
        Time depart, arrival;
        vector<Passenger> passengerList;
    
    public:
        Flight(string i, string dest, Time d, Time a){
            id = i;
            destination = dest;
            depart = d;
            arrival = a;
        }
        
        void addPassenger(Passenger){ //add pasenger obj to vector
            //create passenger obj
            Adults a1("Ali", 34, "Lecturer");
            Adults a2("Goh", 25, "Student");
            Kids k("Azmi", 3, "Ali");

            //add to vector
            passengerList.push_back(a1);
            passengerList.push_back(a2);
            passengerList.push_back(k);
        }

        void printInfo(){
            cout << "Flight Number: " << id << endl;
            cout << "Destination:   " << destination << endl;
            cout << "Departure:     " << depart.getHour() << ":" << depart.getMinute() << endl;
            cout << "Arrival:       " << arrival.getHour() << ":" << arrival.getMinute() << "\n\n";          
            cout << "Number of Passengers: " << passengerList.size() << endl;
            cout << "Number of Adults:     " << endl;
            cout << "Number of Kids:       " << "\n\n";
            cout << "Passengers Details: " << endl;
            
        }
};


int main(){
    Flight f("NAS7921", "Johore Bahru", 810, 900);

    f.printInfo();

    return 0;
}