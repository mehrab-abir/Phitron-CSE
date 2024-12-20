#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int data;
    Stack *next;
};

Stack *TOP = NULL;

void PUSH(int data){
    Stack *new_node = new Stack;
    if(new_node==NULL){
        cout<<"Overflow"<<endl;
        exit(1);
    }
    new_node->data = data;
    new_node->next = TOP;
    TOP = new_node;
    return;
}

void POP(){
    if(TOP==NULL){
        cout<<"Underflow"<<endl;
        exit(1);
    }
    TOP = TOP->next;
    return;
}

//PRINT STACK
void printStack(){
    Stack *ptr = TOP;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main(){

    PUSH(20);
    PUSH(50);
    PUSH(70);
    printStack();
    POP();

    cout<<"After POP operation, "<<endl;
    printStack();

    return 0;
}
