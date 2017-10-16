#include <iostream>
using namespace std;

int fibonacci(int position);

int main() 
{
	int position;
	cout << "Enter the position of the number in the fibonacci sequence: ";
	cin >> position;

	cout << "fibonacci(" << position << "): " << fibonacci(position) << endl;	
	
	return 0;
}

int fibonacci(int position)
{
	int result = 1;
	
	if (position <= 2)
	{
		return result;
	}

	return  fibonacci(position-1) + fibonacci(position-2);
}
