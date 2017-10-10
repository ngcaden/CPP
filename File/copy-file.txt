#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	char character;
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("file.cpp");
	out_stream.open("copy-file.txt");

	in_stream.get(character);
	while (!in_stream.fail())
	{
		cout << character;
		out_stream.put(character);
		in_stream.get(character);
	}

	out_stream.close();
	in_stream.close();

	return 0;
}
