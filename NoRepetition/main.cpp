#include <iostream>

using namespace std;

int main()
{
  int MAXIMUM_CHARACTER = 50;
  char string[MAXIMUM_CHARACTER] = {};
  cout << "Type in a a string: ";
  cin.getline(string, MAXIMUM_CHARACTER);

  for (int i = 0 ; i < MAXIMUM_CHARACTER ; i++)
  {
    for (int count = i + 1; count < MAXIMUM_CHARACTER ; count++)
    {
      if (string[count] == string[i])
      {
        string[count] = 0;
      }
    }
  }
  cout << "The string without repetitions is: ";

  for (int i = 0; i < MAXIMUM_CHARACTER; i++)
  {
    cout << string[i];
  }

  cout << endl;

  return 0;
}
