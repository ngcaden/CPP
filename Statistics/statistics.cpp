#include <iostream>
#include <cmath>
#include"statistics.h"

using namespace std;

/* FUNCTIONS TO COMPUTE AVERAGE */
double average(double num1) {
  return num1;
};

double average(double num1, double num2) {
  return (num1+num2)/2;
};

double average(double num1, double num2, double num3){
  return (num1+num2+num3)/2;
};

double average(double num1, double num2, double num3, double num4){
  return (num1+num2+num3+num4)/2;
};

/* FUNCTION TO COMPUTE STANDARD DEVIATION */
double standard_deviation(double num1) {
  return 0;
};
double standard_deviation(double num1, double num2) {
  double ave;
  ave = average(num1, num2);
  return sqrt(average(pow((num1-ave),2)+pow((num2-ave),2)));
};
double standard_deviation(double num1, double num2, double num3){
  return 0;
};
double standard_deviation(double num1, double num2, double num3, double num4) {
  return 0;
};
