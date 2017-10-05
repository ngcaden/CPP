/* Author: Quang Nguyen
 * Last Edit: 5/11111111111111111110/2017
 *
 * This programme asks the user for the upper limit, lower limit and 
 * step size for a temperature conversion table. The programme will
 * output a table with temperature converted from Fahrenheit to 
 * Celsius and Kelvin.
 *
 * */

#include <iostream>
using namespace std;

int main() {
	int LOWER, UPPER, STEP, fahr;
	double celcius, kelvin;

	cout << "Enter the lower limit for temperature in Fahrenheit then press RETURN:\n";
	cin >> LOWER;

	cout << "Enter the upper limit for temperature in Fahrenheit:\n";
	cin >> UPPER;

	cout << "Enter the step size for the conversion table:\n";
	cin >> STEP;

	cout << "Fahrenheit   Celsius   Absolute Value\n";
	cout << endl;
	
	cout.precision(2);
	cout.setf(ios::fixed);

	for (fahr=LOWER; fahr <= UPPER; fahr += STEP) {
		// Calculation
		celcius = (static_cast<double>(fahr) - 32)*5/9;
		kelvin = celcius + 273.15;
		
		// Output on screen
		cout << fahr;
	       	cout.width(15);
		cout << celcius;
	       	cout.width(15);
		cout << kelvin << endl;
	}

	return 0;
}
