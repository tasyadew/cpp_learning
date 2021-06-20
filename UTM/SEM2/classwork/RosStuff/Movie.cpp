//MUHAMMAD IKHWAN BIN MAZLAN A20EC0091
//MUHAMMAD FADTHUN AMIERRUN BIN MD NORAZAM A20EC0085
//MUHAMMAD SHAWALUDDIN BIN SHAARI A20EC0099

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Audience {
protected:
	string name;
	int age, seatNo;

public:
	Audience(string name, int age, int seatNo) {
		this->name = name;
		this->age = age;
		this->seatNo = seatNo;
	}
	virtual void displayDetails() {
		cout << name << age << seatNo;
	}
	virtual double calcDisc() = 0;
};

class Adults : public Audience {
public:
	Adults(string name, int age, int seatNo) : Audience(name, age, seatNo) {
		this->name = name;
		this->age = age;
		this->seatNo = seatNo;
	}
	double calcDisc() {
		if (age >= 60)
			return 0.2;
		else
			return 0.0;
	}
	void displayDetails() {
		cout << left << setw(15) << name << setw(5) << age << setw(20) << "-" << setw(5) << seatNo;
	}
};

class Kids : public Audience {
private:
	string parentName;

public:
	Kids(string name, int age, int seatNo, string parentName) : Audience(name, age, seatNo) {
		this->parentName = parentName;
		this->name = name;
		this->age = age;
		this->seatNo = seatNo;
	}
	double calcDisc() {
		if (age <= 2)
			return 1;
		else if (age >= 12)
			return 0.2;
		else
			return 0.0;
	}
	void displayDetails() {
		cout << left << setw(15) << name << setw(5) << age << setw(20) << parentName << setw(5) << seatNo;
	}
};

class Date {
private:
	int day, month, year;
	char delim;
public:
	void dispDate() {
		cout << day << delim << month << delim << year;
	}
	void readDate() {
		cin >> day >> delim >> month >> delim >> year;
	}
};

class Time {
private:
	int hour, minute;
	char delim;
public:
	void dispTime() {
		if (hour < 12) {
			cout << hour << delim << minute << " am";
		}
		else if (hour >= 12) {
			cout << hour << delim << minute << " pm";
		}
	}
	void readTime() {
		cin >> hour >> delim >> minute;
	}
};

class Movie {
private:
	string title;
	bool seat[20];
	double price;
	int numKids, numAdults;
	int numAudience, hallNo;
	Audience* audienceList[20];
	Date d;
	Time t;
	int count;

public:
	Movie() {
		title = "";
		price = 0.0;
		numKids = 0;
		numAdults = 0;
		numAudience = 0;
		hallNo = 0;
		count = 0;
		bool seat[20] = { 0 };
	}
	void readInput() {
		cout << "\nTitle: ";
		cin.ignore();
		getline(cin, title);
		cout << "Hall Number: ";
		cin >> hallNo;
		cout << "Ticket Price: RM";
		cin >> price;
		cout << "Date [dd-mm-yyyy]: ";
		d.readDate();
		cout << "Time [hour:min] using 24-hour format: ";
		t.readTime();
	}
	string getTitle() {
		return title;
	}
	bool getSeat(int a) {
		return seat[a];
	}
	void setSeat(int a) {
		seat[a] = true;
	}
	void getDateTime() {
		d.dispDate();
		cout << " ,";
		t.dispTime();
	}
	void addAudience(Audience* a) {
		char terminate;
		do {
			string name[20], parentName;
			int age,
				seatNo[20];
			int i = 0; // for array
			//audience details
			cout << endl;
			cout << "Name   : ";
			cin.ignore();
			getline(cin, name[i]);
			cout << "Age    : ";
			cin >> age;
			if (age <= 2) {
				cout << "Parent Name: ";
				cin.ignore();
				getline(cin, parentName);
				//to detect parent's seat
				for (int j = 0; j < i; j++) {
					if (parentName == name[j])
						seatNo[i] = seatNo[j];
					else
						cout << "Parents not in the list!" << endl;
				}
				a = new Kids(name[i], age, seatNo[i], parentName);
				audienceList[count] = a;
				numKids++;
				count++;
			}
			else if (age <= 12 && age > 2) {
				do {
					cout << "Seat No: ";
					cin >> seatNo[i];
					if (getSeat(seatNo[i]) == false) {
						setSeat(seatNo[i]);
						break;
					}
					else {
						cout << "Seat not available, choose others!" << endl;
					}
				} while (seatNo != 0);
				a = new Kids(name[i], age, seatNo[i], parentName);
				audienceList[count] = a;
				numKids++;
				count++;
			}
			else {

				do {
					cout << "Seat No: ";
					cin >> seatNo[i];

					if (getSeat(seatNo[i])==false) {
						setSeat(seatNo[i]);
						break;
					}
					else {
						cout << "Seat not available, choose others!" << endl;
					}
				} while (seatNo[i] != 0);
				a = new Adults(name[i], age, seatNo[i]);
				audienceList[count] = a;
				numAdults++;
				count++;
			}
			numAudience++;
			cout << "\nPress Y to continue : ";
			cin >> terminate;
			i++;
		} while (terminate == 'Y' || terminate == 'y');

	}
	void displayInfoMovie() {
		cout << "Title: " << title << endl
			<< "Hall : " << hallNo << endl
			<< "Date : ";
		d.dispDate();
		cout << endl << "Time : ";
		t.dispTime();
		cout << endl << "Price: RM" << price << endl << endl;
	}
	void displayInfoAudience() {
		double totPrice = 0.0;
		cout << "Number of Audiences : " << numAudience << endl
			<< "Number of Adults : " << numAdults << endl
			<< "Number of Kids : " << numKids << endl << endl;
		cout << left << setw(3) << "No" << setw(15) << "Name" << setw(5) << "Age"
			<< setw(20) << "ParentName" << setw(5) << "SeatNo"
			<< setw(10) << "Ticket(RM)" << endl;
		for (int i = 0; i < count; i++) {
			double priceA;
			cout << setw(3) << i + 1;
			audienceList[i]->displayDetails();
			priceA = price - price * audienceList[i]->calcDisc(); 
			cout << setw(10) << priceA << endl;
			totPrice = totPrice + priceA;
		}
		cout << endl << endl << "Total ticket price = RM" << totPrice << endl << endl;

	}
};



int main() {

	Movie m[10];
	int task = 0;
	int count = 0;
	//user input

	do {
		cout << "========== Menu ==========" << endl
			<< "[1] Add Movie" << endl
			<< "[2] Add Audience" << endl
			<< "[3] Display Movies" << endl
			<< "[4] Display Audiences" << endl
			<< "[5] Exit" << endl
			<< "===========================" << endl << endl
			<< "Select task: ";
		cin >> task;

		if (task == 1) {
			cout << "\n<<< Add Movie >>>" << endl;
			m[count].readInput();
			count++;
		}
		else if (task == 2) {
			if (count == 0) {
				cout << "Sorry!! No movie, please add movie first" << endl;
				continue;
			}
				
			else
			{
			cout << "\n<<< Add Audience >>>" << endl;
			int movie;
			//movie list
			for (int i = 0; i < count; i++) {
				cout << "[" << i + 1 << "]" << m[i].getTitle() << " (";
				m[i].getDateTime();
				cout << ")" << endl;
			}
			//movie selection
			cout << "\nSelect movie: ";
			cin >> movie;
			//audience details
			cout << "\n--- Enter Audience Info --- \n";
			Audience* a;
			m[movie-1].addAudience(a);
			}
		}
		else if (task == 3) {
			if (count == 0) {
				cout << "Sorry, No movie data to display!" << endl << endl;
				continue;
			}
			else {
			cout << "\n<<< Movie Info >>>" << endl << endl;
			for (int i = 0; i < count; i++) {
				cout << "Movie #" << i + 1 << " " << endl;
				m[i].displayInfoMovie();
			}
			}
		}
		else if (task == 4) {
			if (count == 0) {
				cout << "Sorry, No movie data to display!" << endl << endl;
				continue;
			}
			else {
			cout << "\n<<< Movie(s) and Audience(s) Info >>>" << endl;
			cout << "Number of movies: " << count << endl << endl;
			for (int i = 0; i < count; i++) {
				cout << "Movie #" << i + 1 << " " << endl;
				m[i].displayInfoMovie();
				m[i].displayInfoAudience();
			}
			}


		}
		else if (task == 5) {
			break;
		}
		cout << endl;
	} while (task != 0);

	return 0;

}
