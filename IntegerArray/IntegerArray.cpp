#include <iostream>
#include"IntegerArray.h"
#include <cmath>

using namespace std;

// FUNCTION TO INPUT VALUES FOR THE FIRST N ELEMENTS OF ARRAY A
void input_array(int a[], int n)
{
  for (int i = 0 ; i < n ; i++)
  {
    cout << "Input element number " << (i+1) << ":";
    cin >> a[i];
  }
};

// FUNCTION TO DISPLAY THE VALUES OF THE FIRST N ELEMENTS OF THE ARRAY A
void display_array(int a[], int n)
{
  cout << "{";
  cout << a[0];
  for (int i = 1; i < n ; i++)
  {
    cout << ", " << a[i];
  }
  cout << "}\n";
};

// FUNCTION TO COPY THE VALUES OF THE FIRST N ELEMENTS OF A2 TO A1
void copy_array(int a1[], int a2[], int n)
{
  for (int i = 0; i < n ; i++)
  {
    a1[i] = a2[i];
  }
};

// FUNCTION TO RETURN THE STANDARD DEVIATION OF THE FIRST N ELEMENTS OF A
double standard_deviation(int a[], int n)
{
  double ave = average(a, n);
  double term_sum = 0.0;
  for (int i = 0; i < n ; i++)
  {
    term_sum += pow((a[i]-ave),2);
  }
  return sqrt(term_sum/n);

};

double average(int a[], int n)
{
  double sum = 0.0;
  for (int i = 0; i < n ; i++)
  {
    sum += a[i];
  }
  return sum/n;
};
