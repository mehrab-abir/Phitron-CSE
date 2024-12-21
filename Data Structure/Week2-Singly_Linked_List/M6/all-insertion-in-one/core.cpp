#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "core.h"

using namespace std;

Node::Node(int value) {
	this->value = value;
	this->next = NULL;
}

//insert at head
void insert_at_head(Node*& head, Node*& tail, int value) {
	Node* newnode = new Node(value);

	newnode->next = head;
	head = newnode;
}

//insert at tail
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

//insert at any position
void insert_at_any_position(Node*& head, int index, int value) {
	Node* newnode = new Node(value);

	Node* temp = head;
	for (int i = 1; i < index; i++) {
		temp = temp->next;
	}

	newnode->next = temp->next;
	temp->next = newnode;
}

//length of the linked list
void list_length(Node* head) {
	Node* temp = head;

	int length = 0;

	while (temp != NULL) {
		temp = temp->next;
		length++;
	}

	cout << "\nLength of the linked list: " << length << endl;
}

//print the linked list
void print_linked_list(Node* head) {
	Node* temp = head;
	cout << "\nThe linked list: ";
	while (temp != NULL) {
		cout << temp->value<<" ";
		temp = temp->next;
	}
	cout << endl;
}

//reverse print
void reverse_print(Node* temp) {
	if (temp == NULL) {
		return;
	}
	reverse_print(temp->next);
	cout << temp->value << " ";
}