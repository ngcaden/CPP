/* Author: Quang Nguyen
Programme last changed 4th October 2017 */

/* This programme promts the user for the current year, current month,
the user's current age, the users' month of birth, another year and
another month. It then calculates the age that the user was or will be 
in the year and month entered */

#include <iostream>

using namespace std;

int main() {
	// Define input variables
	int year_now, month_now, age_now, month_born, another_year, another_month;
	
	// Define age variables
	int another_age_months;
	double another_age_years;

	// Define age limit
	int dead_age = 150;

	cout << "Enter the current year then press RETURN.\n";
	cin >> year_now;

	cout << "Enter the current month (a number from 1 to 12).\n";
	cin >> month_now;

	cout << "Enter your current age in years.\n";
	cin >> age_now;

	cout << "Enter the month in which you were born (a number from 1 to 12).\n";
	cin >> month_born;	

	cout << "Enter the year for which you wish to know your age.\n";
	cin >> another_year;

	cout << "Enter the month in this year.\n";
	cin >> another_month;

	// Calculate age in months
	another_age_months = another_year*12 + another_month - ((year_now - age_now)*12 + month_born);
	
	// Calculate age in years
	another_age_years = another_age_months / 12.;	

	if (another_age_years > dead_age) {
		cout << "Sorry but you'll probably be dead by ";
		cout << another_year << "!\n"; 
	} else if (another_age_years >= 0) {
		cout << "Your age in " << another_month << "/" << another_year << ": ";
		cout << (int)another_age_years << " years and " << 
			((another_age_years - (int)another_age_years)*12) << " months .\n";
	} else {
		cout << "You weren't even born in  ";
		cout << another_year << "!\n";
	}
	
	return 0;
} 
