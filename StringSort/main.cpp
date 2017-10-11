#include <iostream>

using namespace std;

void string_sort(char string[], int length);
int minimum_from(char string[], int position, int length);
void swap(char& first, char& second);

int main()
{
  const int MAXIMUM_LENGTH = 10;
  char string[MAXIMUM_LENGTH] = {};
  cout << "Type in a string (less than 10 characters): ";
  cin.getline(string, MAXIMUM_LENGTH);
  string_sort(string, MAXIMUM_LENGTH);
  cout << "The sorted string is: ";
  for (int i = 0; i < MAXIMUM_LENGTH; i++)
  {
    cout << string[i];
  }
  cout << endl;
}

void string_sort(char string[], int length)
{
  for (int i = 0 ; i < length ; i++)
  {
    swap(string[i], string[minimum_from(string, i, length)]);
  }
}

int minimum_from(char string[], int position, int length)
{
  int min_index = position;
  for(int i = position + 1 ; i < length ; i++)
  {
    if(static_cast<int>(string[i]) < static_cast<int>(string[min_index]))
    {
      min_index = i;
    }
  }
  return min_index;
}

void swap(char& first, char& second)
{
  char temp = first;
  first = second;
  second = temp;
}
