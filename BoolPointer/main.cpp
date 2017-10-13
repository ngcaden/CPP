#include <iostream>

using namespace std;

int char_compare(char char1, char char2)
{
	int char1_int = static_cast<int>(char1);
	int char2_int = static_cast<int>(char2);
	if (char1_int == char2_int)
		return 0;
	else if (char1_int > char2_int)
		return 1;
	else
		return 2;
}

bool string_compare(char* string1_ptr, char* string2_ptr, int length)
{
	int result = 0;

	for (int index = 0 ; (result == 0) && (index < length) ; index++)
	{
		result = char_compare(*(string1_ptr + index),*(string2_ptr + index));
	}

	if ((result == 0)||(result==1))
		return false;
	else
		return true;
}

void print_string(char* string_pointer, int length)
{
	for (char* pointer = string_pointer ; *pointer ; pointer++)
	{
		cout << *pointer;
	}
	cout << endl;
	return;
}

int main()
{
	const int MAX_LENGTH = 10;

	char* string1_ptr;
	char* string2_ptr;
	string1_ptr = new char[MAX_LENGTH];
	string2_ptr = new char[MAX_LENGTH];
	cout << "Enter the first string (up to 10 characters):";
	cin.getline(string1_ptr, MAX_LENGTH);

	cout << "Enter the second string (up to 10 characters):";
	cin.getline(string2_ptr, MAX_LENGTH);

	print_string(string1_ptr,MAX_LENGTH);
	print_string(string2_ptr,MAX_LENGTH);

	if  (string_compare(string1_ptr, string2_ptr, MAX_LENGTH))
		cout << "The first string comes first.";
	else
		cout << "The first string does not come first.";

	cout << endl << endl;

	delete [] string1_ptr;
	delete [] string2_ptr;

	return 0;
}
