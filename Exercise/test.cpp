#include <iostream>
using namespace std;

int main()
{
  const int NUM_FISH = 20;
  int fish[NUM_FISH];
  int count;
  cout << "Enter the number of fish caught by each fisherman\n";

  for (count = 0; count < NUM_FISH; count++)
  {
    cout << "fisherman " << (count+1) << ": ";
    cin >> fish[count];
  }
  cout << "Data store array fish: ";
  for (count = 0; count < NUM_FISH; count++)
  {
    cout << fish[count] << " ";
  }
  return 0;
}
