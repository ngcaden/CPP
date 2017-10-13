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

// add a node to the front of the list
void add_to_front(Node* &front, Node* &rear, const char* word) {
	Node* item = create_new_node(word);

	// empty list case
	if (!front) {
		front = rear = item;
		return;
	}

	// default case
	item->next = front;
	front = item;
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

// output the list to the screen
void print_list(Node* front) {
	for (Node* current = front ; current ; current=current->next)
		cout << "[" << current->word << "]";
	cout << endl;
	return;
}

// delete the node containing the target string
void delete_node(Node* &front , Node* &rear, const char* target) {
	Node* p = front;
  Node* q = NULL;

	// find the node we want to delete
	for (p=front ; p && strcmp(p->word, target) ; p=p->next)
		q = p;

	if (p == NULL) {
		cout << "could not find the word " << target << " in the list." << endl;
		return;
	}

	// p now points to the node we want to delete
	// q now points to the node before the one we want to delete

	// store the targets next pointer and delete the target
	Node* link = p->next;
	delete p;

	// handle the case that the target is the front (or equivalently q == NULL)
	if (p==front) {
		front = link;
		if (front == NULL)
			rear = NULL;
		return;
	}

	// update the next pointer of the node before the one being deleted
	q->next = link;

	// handle the case that the target is the rear
	if (p == rear)
		rear = q;
		return;
}

// insert a word into a sorted list
void add_sorted(Node* &front, Node* &rear, const char* new_word) {
	Node* p = front;
	Node* q = NULL;

	// find the node we want to insert after
	for (p=front ; p && (strcmp(p->word, new_word) < 0) ; p=p->next)
		q=p;

	// p points to the node we want to insert before
	// q points to the node we want to insert after

	if (q==NULL) {
		add_to_front(front, rear, new_word);
		return;
	}

	// otherwise create the new node
	Node* new_node = create_new_node(new_word);

	// and insert it after q and before p
	new_node->next = p;
	q->next = new_node;

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

void add_word(Node* &front, Node* &rear, const char* word_place, const char* word) {
	Node* p = front->next;
	Node* q = front;

	// find the node we want to insert after
	for (p=front->next ; p && strcmp(q->word, word_place); p=p->next)
		q = p;

	// p points to the node we want to insert before
	// q points to the node we want to insert after

	if (!p && !strcmp(q->word, word_place)) {
		add_to_rear(front, rear, word);
		return;
	}
	else if (!p && strcmp(q->word, word_place)) {
		cout << "could not find the word " << word_place << " in the list." << endl;
		return;
	}
	else {
		Node* new_node = create_new_node(word);
		new_node->next = p;
		q->next = new_node;
		return;
	}
}

// find the minimum from the current word
Node* minimum_from(Node* current)
{
	Node* minimum = current;

	for(Node* current_compare = current->next ; current_compare ; current_compare = current_compare->next)
	{
		if (strcmp(current_compare->word, minimum->word) < 0)
			minimum = current_compare;
	}

	return minimum;
}

// swap positions of first and second words
void swap(Node* &first, Node* &second)
{
	char temp[80] = {};
	strcpy(temp,first->word);
	strcpy(first->word,second->word);
	strcpy(second->word,temp);
}


// sort list of words
void list_sort(Node* &front, Node* &rear)
{
	for (Node* current = front ; current->next ; current = current->next)
	{
		Node* minimum = minimum_from(current);
		swap(current, minimum);
	}
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

	cout << "THE LIST IS NOW:\n";
	print_list(front);
	cout << endl;

	cout << "AFTER WHICH WORD WOULD YOU LIKE TO ADD AN EXTRA WORD? ";
	cin.getline(temp, MAXIMUM_LENGTH);

	char temp_add[MAXIMUM_LENGTH] = {};
	cout << "WHICH WORD WOULD YOU LIKE TO ADD? ";
	cin.getline(temp_add, MAXIMUM_LENGTH);

	add_word(front, rear, temp, temp_add);

	cout << "THE LIST IS NOW:\n";
	print_list(front);cout << "THE LIST IS NOW:\n";
	print_list(front);
	cout << endl;
	cout << endl;

	cout << "WHICH WORD WOULD YOU LIKE TO DELETE? ";
	cin.getline(temp, MAXIMUM_LENGTH);

	delete_node(front, rear, temp);

	cout << "THE LIST IS NOW:\n";
	print_list(front);
	cout << endl;

	list_sort(front, rear);
	cout << "AFTER SORTING, THE LIST IS NOW:\n";
	print_list(front);
	cout << endl;

	delete_list(front, rear);
	return 0;
}
