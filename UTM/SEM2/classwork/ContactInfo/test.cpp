#include<iostream> 
using namespace std; 

class fraction {
    int num,denom; 
        public:
        void setNum(int num){this->num=num;} 
        void setDenom(int denom){this->denom=denom;} 
        fraction operator*(fraction & F2){ 
            fraction F3; F3.num=num*F2.num; F3.denom=denom*F2.denom; return F3; } 
        fraction operator/(fraction & F2) { fraction F3; int a,b,c; a=1/(denom/(1/F2.num)); cout<<"A: "<<endl; b=num/(1/F2.denom); cout<<"B: "<<endl; c=(num/denom)/(F2.num/F2.denom); F3.num=c/a; F3.denom=c/b; return F3; } fraction operator+(fraction &F2) { fraction F3; F3.num=((num/denom)+(F2.num/F2.denom))*(denom*F2.denom); F3.denom=((num/denom)+(F2.num/F2.denom))*(1/((denom*F2.num)+(num*F2.denom))); return F3; } fraction operator-(fraction &F2) { fraction F3; F3.num=((num/denom)-(F2.num/F2.denom))*(denom*F2.denom); F3.denom=((num/denom)-(F2.num/F2.denom))*(1/((denom*F2.num)-(num*F2.denom))); return F3; } void readFrac() { cha12:25
void readFrac() { char y; cout<<"Enter numerator/denominator: "; cin>>num>>y>>denom; } void displayFrac(fraction &F2,fraction&F3,string x) { cout<<num<<"/"<<denom<<" "<<x<<" "<<F2.num<<"/"<<F2.denom<<" = "<<F3.num<<"/"<<F3.denom<<endl; } int getNum(); int getDenom(); }; int main() { fraction f1,f2,f3; cout<<"Enter 1st fraction:"<<endl; f1.readFrac(); cout<<"Enter 2nd fraction:"<<endl; f2.readFrac(); f3=f1*f2; f1.displayFrac(f2,f3,"*"); f3=f1/f2; f1.displayFrac(f2,f3,"/"); f3=f1+f2; f1.displayFrac(f2,f3,"+"); f3=f1-f2; f1.displayFrac(f2,f3,"-");