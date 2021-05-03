/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1="movement", str2;
    
    //line 1
    str1.insert(4,"Control");
    cout<<str1<<endl;
    
    //line 2
    str1.pop_back();
    cout<<str1<<endl;
    
    //line 3
    str1.replace(0,4,"Queen");
    cout<<str1<<endl;
    
    //line 4
    str2=str1.substr(0,12);
    cout<<str2<<endl;
    
    cout<<str2.length()<<endl;

    return 0;
}

/* 
OUTPUT:

moveControlment
moveControlmen
QueenControlmen
QueenControl
12

*/
