#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int total, num;
    vector<int> v;
    cin >> total;

    //storing vector of size total
    for (int i = 0; i < total; i++){
        cin >> num;
        v.push_back(num);
    }

    //sort vector from lowest value to highest value
    sort(v.begin(), v.end());

    //display answer
    for(int j = 0; j < total; j++){
        cout << v[j] << " ";
    }
    
    return 0;
}
