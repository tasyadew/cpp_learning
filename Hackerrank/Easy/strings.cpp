#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string a, b;
    getline(cin, a);
    //cin.ignore();
    getline(cin, b);
    cout << a.size() << " " << b.size() << "\n";
   
    cout << a << b <<"\n";
    
    //swap function
    swap(a[0],b[0]);
    
    /*
    // If use replace, it will replace the whole string
    string str1 = a;
    string str2 = b;
    a.replace(0,1,str2);
    b.replace(0,1,str1);
    
    //This will output: (if input a=abcd b=ef)
        efbcd 
        abcdf
    */
 
    cout << a << " " << b;
  
    return 0;
}