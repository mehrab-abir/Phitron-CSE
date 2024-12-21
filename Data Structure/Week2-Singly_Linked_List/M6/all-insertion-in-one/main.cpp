#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <limits>
#include "core.h"

using namespace std;

int main() {

	Node* head = NULL;
	Node* tail = NULL;

	cout << "\n\t*** Create Linked List ***\n" << endl;

	while (true) {
		int value;
		cout << "Enter an integer number (-1 to end the list): ";
		cin >> value;

		if (value == -1) {
			break;
		}
		insert_at_tail(head, tail, value);
	}

	cout << "\n\t <- - Linked list has been created - ->" << endl;

	int select;

	while (true) {
		cout << endl;
		cout << "1. Insert at head" << endl;
		cout << "2. Insert at tail" << endl;
		cout << "3. Insert at any position" << endl;
		cout << "4. Get the length of the linked list" << endl;
		cout << "5. Print the linked list" << endl;
		cout << "6. Print the linked list in reverse" << endl;
		cout << "0. Exit" << endl;

		cout << "Select an item from the list above (0 to 6): ";

		if (!(cin >> select)) {
			cout << "\n  !! Invalid Input. Enter a number between 0 and 6." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		switch (select) {
		case 1:
			int value_head;
			cout << "Enter the number to insert at head: ";
			cin >> value_head;

			insert_at_head(head, tail, value_head);
			cout << endl;

			cout << value_head << " has been inserted at head. Print the list to see the change" << endl;
			cout << endl;

			cout << "\n****************************************************************************" << endl;
			break;
		case 2:
			int value_tail;
			cout << "Enter the number to insert at tail: ";
			cin >> value_tail;

			insert_at_tail(head, tail, value_tail);
			cout << endl;

			cout << value_tail << " has been inserted at tail. Print the list to see the change" << endl;

			cout << "\n****************************************************************************" << endl;
			break;
		case 3:
			int value, position;
			cout << "Enter the number to insert: ";
			cin >> value;

			cout << "In which position to insert (0 based index): ";
			cin >> position;

			insert_at_any_position(head, position, value);
			cout << endl;

			cout << value << " has been inserted at position " << position << ". Print the list to see the change" << endl;

			cout << "\n****************************************************************************" << endl;
			break;
		case 4:
			list_length(head);

			cout << "\n****************************************************************************" << endl;
			break;
		case 5:
			print_linked_list(head);

			cout << "\n****************************************************************************" << endl;
			break;
		case 6:
			cout << "\nThe linked list in reverse: ";
			reverse_print(head);

			cout << "\n****************************************************************************" << endl;
			break;
		case 0:
			cout << "\n\t*** Good Bye ***" << endl;
			cout << "\t****************" << endl;
			exit(1);
		default:
			cout << "\n  !! Invalid Selection. Please enter a number between 0 and 6." << endl;
			break;
		}
	};
	


	return 0;
}