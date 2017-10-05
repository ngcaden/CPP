/* Author: Quang Nguyen
 * Last Edit: 5/10/2017
 *
 * This programme prompts user to enter a character.
 * If the character is lowercase, the programme will output its uppercase.
 * If the character is uppercase, the programme will output its lowercase.
 *
*/


#include <iostream>
using namespace std;

int main() {
	char input;
	cout << "Enter a character and press RETURN:\n";
	cin >> input;
	
	input = static_cast<int>(input);
	if ((input >= 65) && (input <= 90 )) {
		// Uppercase input
		cout << "The lower case character corresponding to " << input << " is ";
		cout << static_cast<char>(input + 32) << endl;
	} else if ((input >= 97) && (input <= 122)) {
		// Lowercase input
		cout << "The upper case character corresponding to " << input << " is ";
		cout << static_cast<char>(input - 32) << endl;
	} else {
		// Invalid input
		cout << "You entered an incorrect character!" << endl;
	}

	return 0;
}
