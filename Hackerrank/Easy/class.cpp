#include <iostream>
#include <sstream> //like a string version of fstream
#include <cstring>
using namespace std;

class Student{
    private:
        int age, standard;
        string fname, lname;
    public:
        void set_age(int a){
            age = a;
        }
        int get_age(){
            return age;
        }
        
        void set_first_name(string first){
            fname = first;
        }
        string get_first_name(){
            return fname;
        }
        
        void set_last_name(string last){
            lname = last;
        }
        string get_last_name(){
            return lname;
        }
        
        void set_standard(int b){
            standard = b;
        }
        int get_standard(){
            return standard;
        }
        
        string to_string(){
            stringstream sso; //use library sstream. It can convert datatype to string
            string c = ",";
            sso << age << c << fname << c << lname << c << standard; //same as fstream but use ss object
            
            return sso.str(); // .str() is a function to 
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
