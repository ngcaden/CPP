#include <iostream>
#include <cmath>

using namespace std;

int binary_search(int value, int list[], int first, int last);

int main()
{
  int LENGTH = 11;
  int list [LENGTH] = {2,2,3,5,8,14,16,22,22,24,30};

  cout << "binary_search(24,list,0,10) = ";
  cout << binary_search(24,list,0,10) << endl;

  cout << "binary_search(24,list,2,6) = ";
  cout << binary_search(24,list,2,6) << endl;

  cout << "binary_search(22,list,0,10) = ";
  cout << binary_search(22,list,0,10) << endl;

  return 0;
}

int binary_search(int value, int list[], int first, int last)
{
  float temp_position = (first+last)/2.;
  int position = round(temp_position);

  if (list[position] == value)
    return position;
  else if ((position == first) || (position == last))
    return -1;
  else if (value < list[position])
    return binary_search(value, list, first, position);
  else
    return binary_search(value, list, position, last);
}
