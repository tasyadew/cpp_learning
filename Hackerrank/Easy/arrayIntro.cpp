#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Use Dynamic Memory Allocation

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int num;
    cin >> num;
    //int arr[num]; --need to use const if this way
    int *arr;
    arr = new int[num];
    
    for(int x = 0; x<num; x++){
        cin >> arr[x];
    }

    
    for(int x = num-1 ; x>=0; x--){
        cout << arr[x] << " ";
    }

    delete []arr;
    
    return 0;
}