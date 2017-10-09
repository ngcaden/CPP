#include <iostream>
using namespace std;

void print_pyramid(int height);

int main() 
{
	int height;
	cout << "This program prints a 'pyramid' shape of a specified height on the screen.\n" << endl;
	cout << "How high would you like the pyramid? ";
	cin >> height;

	while (height > 30)
	{
		cout << "Pick another height (must be between 1 and 30): ";
		cin >> height;
	}

	print_pyramid(height);

	return 0;
}

void print_pyramid(int height)
{
	for (int i=1; i <= height; i++)
	{
		int space;
		space = height-i;

		for (int x=0; x<space; x++)
		{
			cout << " ";
		}	
		
		for (int x=0; x<2*i; x++)
		{
			cout << "*";
		}

		cout << endl;
	}
}
