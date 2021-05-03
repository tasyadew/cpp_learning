#include <iostream>
using namespace std;

class Inventory
{
    private:
        int itemNumber;
        int numOfItem;
    public:
        Inventory();
        Inventory(int=0,int=0);
        void getId(int id){itemNumber=id;}
        void getAmount(int num){numOfItem=num;}
        void display()
        {
            cout<<"itemNumber:"<<itemNumber<<endl
                <<"numOfItem:"<<numOfItem<<endl;
        }
};

Inventory::Inventory()
{
    itemNumber = 0;
    numOfItem = 0;
}

Inventory::Inventory(int m, int n)
{
    itemNumber = m;
    numOfItem = n;
}

int main()
{
    Inventory products[10] = {Inventory(0,0), Inventory(0,0), Inventory(0,0), 
                              Inventory(0,0), Inventory(0,0), Inventory(0,0), 
                              Inventory(0,0), Inventory(0,0), Inventory(0,0), 
                              Inventory(0,0)};

    int x;

    for (int i=0;i<10;i++)
    {
        cout<<i<<") itemNumber:";
        cin >>x; products[i].getId(x);
        cout<<i<<") numOfItem:";
        cin >>x; products[i].getAmount(x);
        cout<<endl;
    }
    
    for (int i=0;i<10;i++)
    {
        cout<<i<<"):"<<endl;
        products[i].display();
        cout<<endl;
    }

    return 0;
}