#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Flight;

class Passenger{
    protected:
        string name;
        int age;

    public:
        Passenger(string n = "", int a = 0){
            name = n;
            age = a;
        }

        void printDetails(){ //will be override by child classes
            cout << "Name: " << name << "\tAge: " << age << endl;
        }
        
        friend class Flight; //ChadRose <<<<<<<<<<<<<
};

//dont change
class Kids : public Passenger{
    private:
        string parentName;
    
    public:
        Kids(string n, int a, string pn){
            name = n;
            age = a;
            parentName = pn;
        }

        void printDetails(){
            cout << "Name: " << name << "\tAge: " << age << "\t\tParents Name: " << parentName << endl;
        }
};

//dont change
class Adults : public Passenger{
    private:
        string job;

    public:
        Adults(string n, int a, string j){
            name = n;
            age = a;
            job = j;
        }

        void printDetails(){
            cout << "Name: " << name << "\tAge: " << age << "\t\tJob Title\t" << job << endl;
        }
};

class Time{
    private:
        int hour, minute;

    public:
        Time(int h, int m){
            hour = h;
            minute = m;
        }

        int getHour(){return hour;}
        int getMinute(){return minute;}
};

class Flight{
    private :
        string id, destination;
        Time *depart;
        Time *arrival;
        vector<Passenger> passengerList;

    public :
        Flight(string i, string dest, Time *d, Time *a){
        id = i;
        destination = dest;
        depart = d;
        arrival = a;
    };


    void printInfo(){
        int numAdults = 0; //ChadRose vvvvvvvvvvvvvvvvvvvvvvvvv
        int numKids = 0;
        for (int i = 0; i < passengerList.size(); i++){
            if (passengerList[i].age <= 12)
                numKids++;
            else
                numAdults++;
        } //ChadRose ^^^^^^^^^^^^^^^^^^^^^^^^
        cout<< "Flight Number: " << id << endl;
        cout<< "Destination  : " << destination << endl;
        cout<< "Desparture   : " << depart->getHour() << ":" << setfill('0') << setw(2) << depart->getMinute()<< endl;
        cout<< "Arrival      : " << arrival->getHour() << ":" << setfill('0') << setw(2)<< arrival->getMinute() << "\n\n";
        cout<< "Number of Passengers: " << passengerList.size() << endl;
        cout<< "Number of Adults    : " << numAdults << endl;
        cout<< "Number of Kids      : " << numKids << "\n\n";
        cout<< "Passengers Details  : " << endl;
    }

    friend void addPassenger(Passenger, Flight*); //ChadRose <<<<<<<<<<<<<<<
};

void addPassenger(Passenger p, Flight* f){ //ChadRose vvvvvvvvvvvvvvvvv
    f->passengerList.push_back(p);
} //ChadRose ^^^^^^^^^^^^^^^^^^^^

int main(){
    Time t1(8, 10);
    Time t2(9, 00);
    Flight f("NAS7921", "Johore Bahru", &t1, &t2);

    Adults a1("Ali", 34, "Lecturer");
    Adults a2("Goh", 25, "Student");
    Kids k("Azmi", 3, "Ali");

    addPassenger(a1, &f);
    addPassenger(a2, &f);
    addPassenger(k, &f); 

    f.printInfo();
    a1.printDetails(); 
    a2.printDetails();
    k.printDetails(); 

    return 0;
}