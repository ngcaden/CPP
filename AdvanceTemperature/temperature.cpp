/* Author: Quang Nguyen
 * Last edit: 6/10/2017
 *
 * This program prints out a conversion table of temperatures, ater prompting the user
 * for upper and lower bounds of the table in Fahrenheit, and the temperature difference
 * between table entries.
 *
 * */

#include <iostream>
#include"conversions.h"
using namespace std;

/* FUNCTION DECLARATIONS */
void print_preliminary_message();
void print_message_echoing_input(int lower, int upper, int step);
void input_table_specifications(int& lower, int& upper, int& step);
void print_table(int lower, int upper, int step);

/* START OF MAIN PROGRAM */
int main() {
	int lower = 0; /* the lowest Fahrenheit entry in the table */
	int upper = 0; /* the highest Fahrenheit entry in the table */
	int step = 1;  /* difference in Fahrenheit between entries */

	/* print a message explaining what the program does: */
	print_preliminary_message();

	/* prompt the user for table specifications in Fahrenheit: */
	input_table_specifications(lower, upper, step);

	/* print appropriate message including an echo of the input: */
	print_message_echoing_input(lower, upper, step);

	/* Print the table (including the column headings): */
	print_table(lower, upper, step);

	return 0;
}

/* END OF MAIN PROGRAM */

/* FUNCTION TO PRINT OUT PRELIMINARY MESSAGES*/
void print_preliminary_message() {
	cout << "This programme prints out a conversion table of temperatures.\n";
}
/* END OF FUNCTION */

/* FUNCTION TO TAKE IN INPUT FOR TABLE SPECIFICATIONS */
void input_table_specifications(int& lower, int& upper, int& step) {
	cout << "Enter the minimum (whole number) temperature \n";
	cout << "you want in the table, in Fahrenheit:";
	cin >> lower;
	cout << "Enter the maximum temperature you want in the table:";
	cin >> upper;
	cout << "Enter the temperature difference you want between table entries:";
	cin >> step;
}
/* END OF FUNCTION */

/* FUNCTION TO PRINT INFORMATION ABOUT THE TABLE */
void print_message_echoing_input(int lower, int upper, int step) {
	cout << "Temperature conversion table from ";
	cout << lower << " Fahrenheit to " << upper;
	cout << " Fahrenheit, in steps of " << step;
	cout << " Fahrenheit:" << endl;
}

/* FUNCTION TO PRINT OUT THE TEMPERATURE CONVERSION TABLE */
void print_table(int lower, int upper, int step) {
	cout.setf(ios::fixed);
	cout.precision(2);

	// Print out column headings
	cout.width(20);
	cout << "Fahrenheit";
	cout.width(20);
	cout << "Celsius";
	cout.width(20);
	cout << "Absolute Value" << endl;

	// Print out temperature values
	for (int i = lower; i <= upper; i += step) {
		cout.width(20);
		cout << i;
		cout.width(20);
		cout << celsius_of(i);
		cout.width(20);
		cout << absolute_value_of(i) << endl;
	}
}
/* END OF FUNCTION */
