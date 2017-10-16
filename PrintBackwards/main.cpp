#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

struct Node {
	char word[80];
	Node* next;
};

// this function returns a pointer to a newly created node
// note that we set the pointer to the next node to NULL

Node* create_new_node(const char* contents) {
	Node* new_node = new (nothrow) Node;
	assert(new_node != NULL);
	strcpy(new_node->word, contents);
	new_node->next = NULL;
	return new_node;
}

// set up an empty list
void initialise_list(Node* &front, Node* &rear) {
	front = rear = NULL;
	return;
}

// add a node to the rear of the list
void add_to_rear(Node* &front, Node* &rear, const char *word) {
	Node* item = create_new_node(word);

	// empty list case
	if (!front) {
		front = rear = item;
		return;
	}

	// default case
	rear->next = item;
	rear = item;
	return;
}

// output the list to the screen forwards
void print_list_forwards(Node* current) {
	cout << current->word << " ";
  if (current->next != NULL)
    print_list_forwards(current->next);
	return;
}

// output the list to the screen backwards
void print_list_backwards(Node* current) {
  if (current->next != NULL)
    print_list_backwards(current->next);
  cout << current->word << " ";
	return;
}

// delete all items in the list
void delete_list(Node* &front, Node* &rear) {
	// kepp deleting items from the front of the list until there is nothing left
	while (front != NULL) {
		Node* link = front->next;
		delete front;
		front = link;
	}

	rear = NULL;

	return;
}

int main() {
	// front and rear point to the first and last nodes in the linked
	// list respectively
	Node* front, *rear;

	// initialise the list
	initialise_list(front, rear);

	const int MAXIMUM_LENGTH = 10;
	char temp[MAXIMUM_LENGTH] = {};

	// add the first node
	cout << "Enter first word (or '.' to end list): ";
	cin.getline(temp, MAXIMUM_LENGTH);

	// terminate if . is entered
	if (!strcmp(temp,"."))
		return 0;

	while (strcmp(temp,".")) {
		//default case
		add_to_rear(front, rear, temp);
		cout << "Enter next word (or '.' to end list): ";
		cin.getline(temp, MAXIMUM_LENGTH);
	}

	cout << "THE LIST FORWARDS IS:\n";
	print_list_forwards(front);
	cout << endl;

  cout << "THE LIST BACKWARDS IS:\n";
	print_list_backwards(front);
	cout << endl;

	delete_list(front, rear);
	return 0;
}
