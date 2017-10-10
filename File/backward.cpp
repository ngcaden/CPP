#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int count = 0;
	char character;

	ifstream in_stream;
	
	// don't skip white space
	in_stream >> noskipws;	
	in_stream.open("backward.cpp");
	in_stream.get(character);
	while (!in_stream.fail())
	{
		count ++;
		in_stream.get(character);
	} 
	in_stream.close();

	for (int i=count ; i > 0 ; i--)
	{
		in_stream.open("backward.cpp");
		for (int x=0 ; x < i ; x++)
			in_stream.get(character);
		cout << character;
		in_stream.close();
	
	}
	return 0;
}

