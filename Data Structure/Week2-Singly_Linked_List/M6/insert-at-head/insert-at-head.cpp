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

void insert_at_head(Node*& head, int value) { //look, head akta pointer, r akhane head er reference ante hoise, karon head change hobe, jeta main function a o howa lagbe

	Node* newnode = new Node(value); //at first, newnode create korte hobe

	//newnode er 'next' a akhon NULL ache, constructor er karone, ata update kore head ke rakhte hobe

	newnode->next = head; //newnode er 'next' a head ke rekhe dilam, mane, new node er 'next' a head er address ache, karon head to nijei tar node er address carry korteche, jehetu dynamically neya hoise
	head = newnode; //head ke new node a niye gelam

}

int main() {

	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);

	head->next = a;
	a->next = b;

	cout << "Insert at head er age: " << endl;
	cout << "Head: " << head->value << endl;
	cout << "a: " << head->next->value << endl;
	cout << "b: " << head->next->next->value << endl;

	insert_at_head(head, 50);

	cout << "After inserting 50 at head, head er value: " << head->value << endl;
	cout << "Tar porer gula: " << endl;
	cout << head->next->value <<" " << head->next->next->value << " "<< head->next->next->next->value;

	return 0;
}
