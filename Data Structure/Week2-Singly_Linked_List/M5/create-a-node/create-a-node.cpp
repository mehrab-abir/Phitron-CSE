#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node* head = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);

    head->next = secondNode;
    secondNode->next = thirdNode;

    cout << "Head's value: "<< head->value << endl;
    cout << "Second Node's value: "<< head->next->value << endl;
    cout << "Third Node's value: "<< head->next->next->value << endl;


    return 0;
}