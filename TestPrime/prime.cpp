#include <iostream>
#include"prime.h"

using namespace std;

bool test_prime(int number) 
{
	if (number <= 1) 
	{
		return false;
	}
	else
	{
		number = static_cast<double>(number);
		for (int i=2; i < number; i++) 
		{
			if ((number%i) == 0) 
			{
				return false;
			}
		}
		return true;
	}
}



