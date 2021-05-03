#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //From slides chapter 5
	string movieTitle;
	string firstName, lastName;
	firstName = "George";
	lastName = "Washington";
	cout << firstName << " " << lastName << endl;

    string s3, s4;
    string s1("Hi");
    string s2(" Dad");

    s3 = s1 + s2;		// string concatenation 
    s4 = "Hello Mom!";	
    cout <<" "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;

    string word1, phrase;
    string word2 = " Dog";
    cout << "Type \"Hot\": ";
    cin >> word1; // user enters "Hot, word1 has "Hot"
    phrase = word1 + word2; // phrase has "Hot Dog"

    phrase += " on a bun";
    cout << phrase <<endl;// displays "Hot Dog on a bun"

    string test(60, '*');
    cout << '\n' << test;

    //Manipulate string about family name
    string husband = "Mr Kenny Roger";
    string wife("Mrs Katherine Johnson");
    string familyName(husband, 9); //Roger (start from char[9] = R)
    string wifeFirstName(wife, 0, 13); //Mrs Katherine (start from 0, take 13 characters)
    string wifeName;
    wifeName = wifeFirstName + " " + familyName;
    string son("Beckham ");
    son.insert(8, familyName); //start inserting at position 8
    string nickname = son.substr(0, 4); //from pos 0 to pos 4 (Beck)


    cout << "\nHusband Full Name: "<< husband;
    cout << "\nWife Full Name: " << wifeName;
    cout << "\nSon Full Name: " << son;
    cout << "\nSon's Nickname: " << nickname;
    cout << "\n\n";

//Manipulate with append function
  string str;
  string str2="Writing ";
  string str3="print 10 and then 5 more";

  // used in the same order as described above:
  str.append(str2);                       // "Writing "
  str.append(str3,6,3);                   // "10 "
  str.append("dots are cool",5);          // "dots "
  str.append("here: ");                   // "here: "
  str.append(10u,'.');                    // ".........."
  str.append(str3.begin()+8,str3.end());  // " and then 5 more"
  //str.append<int>(5,0x2E);                // "....."

  std::cout << str << '\n';
	return 0;
}