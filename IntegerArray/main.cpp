#include <iostream>
#include"IntegerArray.h"

using namespace std;

int main()
{
  // Initialise arrays
  const int NUMBER_OF_ELEMENTS = 5;
  int a1[NUMBER_OF_ELEMENTS], a2[NUMBER_OF_ELEMENTS];

  // Input initial values for arrays
  cout << "Input values for first array.\n";
  input_array(a1,NUMBER_OF_ELEMENTS);
  cout << "Input values for second array.\n";
  input_array(a2,NUMBER_OF_ELEMENTS);

  // Display initial values for arrays
  cout << "Initial value for array a1: \n";
  display_array(a1,NUMBER_OF_ELEMENTS);
  cout << "Initial value for array a2: \n";
  display_array(a2,NUMBER_OF_ELEMENTS);

  // Amend values for second array
  cout << "Amend values for second array.\n";
  input_array(a2, (NUMBER_OF_ELEMENTS-1));

  cout << "Amended value for array a2: \n";
  display_array(a2, NUMBER_OF_ELEMENTS);

  // Copy elements from first array to the second array
  copy_array(a2, a1, (NUMBER_OF_ELEMENTS-2));
  cout << "Elements of arrays copied!\n";
  cout << "Final value for array a1: \n";
  display_array(a1,NUMBER_OF_ELEMENTS);

  cout << "Final value for array a2: \n";
  display_array(a2,NUMBER_OF_ELEMENTS);

  cout << "Standard deviation for array a1: ";
  cout << standard_deviation(a1,NUMBER_OF_ELEMENTS) << endl;

  cout << "Standard deviation for array a2: ";
  cout << standard_deviation(a2,NUMBER_OF_ELEMENTS) << endl;

  return 0;
}
