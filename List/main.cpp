#include <iostream>
#include <list>

using namespace std;

int main() {
	int myints[] = {16,2,77,29};
	list<int> number_list (myints, myints + sizeof(myints)/sizeof(int));

	for (list<int>::iterator it = number_list.begin() ; it != number_list.end() ; it++)
		cout << *it << ' ';
	cout << endl;
	return 0;
}
