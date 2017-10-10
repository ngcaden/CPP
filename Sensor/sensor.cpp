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
#include <fstream>

using namespace std;

float sensor_reading()
{
	return 20.0;
}

int main()
{
	float total = 0.0;
	ofstream out_stream;
	out_stream.open("reading.txt");
	for (int n=1; n < 4000000; n++)
	{
		total += sensor_reading();

		if ((n % 100000)==0)
		{
			float average = total/n;

			out_stream << n << ", "<< total << ", " << average << endl;

			cout << setw(20) << "the average of " << setw(20) << n << "reading is " << average << endl;
			if (average > 20.1)
				cout << "#FREEZER ON" << endl;
			if (average < 19.9)
				cout << "#HEATER ON" << endl;
		}
	}
	out_stream.close();
	return 0;
}
