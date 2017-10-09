/* 
 *
 * Author: Quang Nguyen
 * Last Edit: 9/10/2017
 *
 * This programme test the prime_test function of file prime.cpp
 * It will prompt the user to input a randam integer, which is then
 * tested for prime.
 * 
 * */

#include <iostream>
#include"prime.h"

using namespace std;

int main()
{
	int number;
	cout << endl << "Enter an integer for prime: ";
	cin >> number;

	if (test_prime(number)) 
	{
		cout << "It is a prime number.\n";
	} 
	else
	{
		cout << "It is not a prime number.\n";
	}
	return 0;
}
