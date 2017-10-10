/* Author: Quang Nguyen
 * Last Edit: 10/10/2017
 *
 * This programme reads file and output to the screen while
 * omitting any comments in the file.
 *
 * */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() 
{
	char character;
	ifstream in_stream;

	in_stream.open("comment.cpp");

	bool comment=false;
	
	in_stream.get(character);
	while (!in_stream.fail())
	{
		if (character == '/')
		{
			char character2 = in_stream.peek();
			if (character2 == static_cast<int>('*'))
				comment = true;
		}

		if (comment) 
		{
			if (character == '*')
			{
				char character2 = in_stream.peek();
				if (character2 == static_cast<int>('/'))
				{
					comment = false;
					in_stream.get(character);
					in_stream.get(character);
				}
			}
		} 
		else
		{
			cout << character;
		}	
		in_stream.get(character);	
	}
	in_stream.close();
	return 0;
}
