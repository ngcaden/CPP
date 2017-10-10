/* Author: Quang Nguyen
 * Last Edit 10/10/2017
 *
 * This programme investigate the problems of floating point
 * in C++.
 *
 * */


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float sensor_reading()
{
	return 20.0;
}

int main()
{
	float total = 0.0;
	for (int n=1; n < 100000000; n++) 
	{
		total += sensor_reading();
		if ((n % 100000)==0)
		{
			float average = total/n;
			cout << setw(20) << "the average of " << setw(20) << n << "reading is " << average << endl;
			if (average > 20.1) 
				cout << "#FREEZER ON" << endl;
			if (average < 19.9)
				cout << "#HEATER ON" << endl;
		}
	}
	return 0;
}
