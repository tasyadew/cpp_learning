#include <iostream>
#include <cstdio>
using namespace std;

/**********************************************
Note: 
scanf = cin
printf = cout

int ------- %d
long ------ %ld
char ------ %c
string ---- %s
float ----- %f
double ---- %lf
**********************************************/

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf\n", a, b, c, d, e);
    
    //cin >> a >> b >> c >> d >> e;   
    //cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n";
    return 0;
}
