#include<iostream>
#include<string>
using namespace std;

int main(){
    int total;
    cin >> total;

    for(int x=0; x<total; x++){
        string input;
        string s1, s2;        
        cin >> input;
        int size = input.length();

        for(int y=0; y<size; y++){
            if(y%2==0){
                s1 += input[y];
            }else{
                s2 += input[y];
            }
        }
        cout << s1 << " " << s2 << endl;
    }

    return 0;   
}