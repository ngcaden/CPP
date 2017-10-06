/* Author: Quang Nguyen
 * Last Edit: 6/10/2017
 *
 * This programme takes in input for the base and power of an exponential
 * from the user and then output the result of that exponential. The 
 * programme makes use of for loops for calculation.
 *
 */


#include <iostream>
using namespace std;

int main() {
	int X, n, result = 1;

	cout << "Enter the base of the exponential then press RETURN:\n";
	cin >> X;
	cout << "Enter the power of the exponential:\n"; 
	cin >> n;
	
	for (int i = 0; i < n; i++)
		result = X * result;
	
	cout << "The result of " << X << "^" << n << " is:\n";
	cout << result << endl;
	
	return 0;
}
