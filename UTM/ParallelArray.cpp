#include <iostream>
using namespace std;

int main()
{
  //Store 2 arrays, for country name & its population
    string countryName[12] = {"France","Italy","Japan","Oman","Brunei","India",
                      "Mexico","Brazil","Thailand","Kenya","Malaysia","Taiwan"};
    int countryPopulation[12] = {65273511,60461826,126476461,5106626,437479,
    1380004385, 128932753,212559417,69799978,53771296,32365999,23816775};

    cout << "12 country's name and its population" << endl << endl;

    //Loop function that print out these parallel arrays
    for (int i = 0; i < 12; i++)
    {
        cout << countryName[i] << ": " << countryPopulation[i] << endl;
    }
    return 0;
}
