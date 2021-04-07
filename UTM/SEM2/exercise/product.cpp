#include <iostream>
using namespace std;

class Product{
    private:
        int code;
        double price;
    public:
        Product();
        void setCode(int);
        void setPrice(double);
        int getCode();
        double getPrice();
};