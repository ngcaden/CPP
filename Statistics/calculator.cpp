#include <iostream>
#include"statistics.h"

using namespace std;

int main() 
{
  int number_of_nums;
  double num1, num2, num3, num4, ave, sd;
  cout << endl << "This program tests the functions in the 'statistics.h' header file.\n";
  cout << "Do you wish to test 1, 2, 3, 4 numbers (enter 0 to end the program):";
  cin >> number_of_nums;

  if (number_of_nums <= 0) 
  {
    return 0;
  } 
  
  else if (number_of_nums > 4) 
  {
    cout << "Sorry the program can only test 1, 2, 3 or 4 values.";
    main();
  } 
  
  else if (number_of_nums > 0) 
  {
    cout << endl << "Enter first value:";
    cin >> num1;

    ave = average(num1);
    sd = standard_deviation(num1);

    if (number_of_nums > 1) 
    {
      cout << "Enter second value:";
      cin >> num2;

      ave = average(num1, num2);
      sd = standard_deviation(num1, num2);

      if (number_of_nums > 2) 
      {
        cout << "Enter third value:";
        cin >> num3;

        ave = average(num1, num2, num3);
        sd = standard_deviation(num1, num2, num3);

        if (number_of_nums >3) 
	{
          cout << "Enter fourth value:";
          cin >> num4;

          ave = average(num1, num2, num3, num4);
          sd = standard_deviation(num1, num2, num3, num4);
        }
      } 
    }
    cout << endl << "The average is: " << ave << endl;
    cout << "The standard deviation is: " << sd << endl;
    main();
  }
}
