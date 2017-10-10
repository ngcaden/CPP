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
	in_stream.open("count.cpp");
	in_stream.get(character);
	while (!in_stream.fail())
	{
		count ++;
		in_stream.get(character);
	} 
	cout << count << "\n\n";
	in_stream.close();
}
