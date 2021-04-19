#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    //first line input
    int size, input, del, val1, val2, val3;
    cin >> size;

    //second line input
    vector<int> myVector;
    for(int i = 0; i < size; i++){
        cin >> input;
        myVector.push_back(input);
    }

    //third line input
    cin >> del;
    myVector.erase(myVector.begin() + (del-1));

    //last line input
    cin >> val1 >> val2;
    for(int k = val1; k<val2; k++){
        val3 = val1;
        myVector.erase(myVector.begin() + (val3-1));
    }

    //output
    cout << myVector.size() << endl;

    for (unsigned int j = 0; j < myVector.size(); j++){
        cout << myVector[j] << " ";
    }

    return 0;
}