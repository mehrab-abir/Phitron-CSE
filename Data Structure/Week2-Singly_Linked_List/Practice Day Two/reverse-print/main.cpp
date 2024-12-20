#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Node {
public:
	int value;
	Node* next;

	Node(int value) {
		this->value = value;
		this->next = NULL;
	}
};

void insert_at_tail(Node*& head, Node*& tail, int value) {
	Node* newnode = new Node(value);

	if (head == NULL) {
		head = newnode;
		tail = newnode;
		return;
	}
	tail->next = newnode;
	tail = newnode;
}

void print_linked_list(Node* head) {
	Node* temp = head;

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
}

void print_reverse(Node* temp) {

	if (temp == NULL) {
		return;
	}

	print_reverse(temp->next);
	cout << temp->value << " ";
}


int main() {

	Node* head = NULL;
	Node* tail = NULL;

	cout << "Create Linked List >>>>" << endl;
	while (true) {
		int value;
		cout << "Enter a number (-1 to end the list): ";
		cin >> value;

		if (value == -1) {
			break;
		}
		insert_at_tail(head, tail, value);
	}
	
	cout << "\nThe linked list: ";
	print_linked_list(head);

	cout << "\nThe linked list in reverse: ";
	print_reverse(head);

	return 0;
}