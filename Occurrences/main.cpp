#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

enum Alph {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};

void print_occur(int letter, int count);

int main()
{
	cout.setf(ios::left);
	/* Print table heading */
	cout.width(17);
	cout << "CHARACTER";
	cout << "OCCURRENCES\n\n";

	for (int letter = static_cast<int>(a) ; letter <= static_cast<int>(z) ; letter++)
	{
			/* Open file for reading*/
			ifstream in_stream;
			in_stream.open("main.cpp");

			/* Count the number of occurrences */
			char character;
			int count=0;
			in_stream.get(character);
			while (!in_stream.fail())
			{
				if (character == static_cast<char>(97+letter))
					count++;
				in_stream.get(character);
			}
			in_stream.close();

			print_occur(letter, count);
	}

	return 0;
}
// END OF MAIN FUNCTION


// FUNCTION TO PRINT OUT THE CHARACTER AND ITS NUMBER OF OCCURRENCES
void print_occur(int letter, int count)
{
	cout.width(17);
	switch (letter)
	{
		case a: cout << "a"; cout << count << endl; break;
		case b: cout << "b"; cout << count << endl; break;
		case c: cout << "c"; cout << count << endl; break;
		case d: cout << "d"; cout << count << endl; break;
		case e: cout << "e"; cout << count << endl; break;
		case f: cout << "f"; cout << count << endl; break;
		case g: cout << "g"; cout << count << endl; break;
		case h: cout << "h"; cout << count << endl; break;
		case i: cout << "i"; cout << count << endl; break;
		case j: cout << "j"; cout << count << endl; break;
		case k: cout << "k"; cout << count << endl; break;
		case l: cout << "l"; cout << count << endl; break;
		case m: cout << "m"; cout << count << endl; break;
		case n: cout << "n"; cout << count << endl; break;
		case o: cout << "o"; cout << count << endl; break;
		case p: cout << "p"; cout << count << endl; break;
		case q: cout << "q"; cout << count << endl; break;
		case r: cout << "r"; cout << count << endl; break;
		case s: cout << "s"; cout << count << endl; break;
		case t: cout << "t"; cout << count << endl; break;
		case u: cout << "u"; cout << count << endl; break;
		case v: cout << "v"; cout << count << endl; break;
		case w: cout << "w"; cout << count << endl; break;
		case x: cout << "x"; cout << count << endl; break;
		case y: cout << "y"; cout << count << endl; break;
		case z: cout << "z"; cout << count << endl; break;
		default:	cout << "ERROR!";
	}
}
