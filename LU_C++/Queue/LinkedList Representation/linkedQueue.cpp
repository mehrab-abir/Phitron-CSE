#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int data;
    Queue *next;
};
Queue *Front=NULL, *Rear=NULL;

void PUSH(int data){
    Queue *new_node = new Queue;
    new_node->data = data;
    new_node->next = NULL;

    if(Front == NULL && Rear == NULL){
        Front = new_node;
        Rear = new_node;
    }
    else{
        Rear->next = new_node;
        Rear= new_node;
    }
}

void POP(){
    if(Front==NULL){
        cout<<"Underflow"<<endl;
    }
    Front = Front->next;
}

void printQ(){
    Queue *ptr = Front;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main(){

    PUSH(20);
    PUSH(30);
    PUSH(40);

    printQ();

    POP();

    cout<<"After POP operation:"<<endl;

    printQ();

    return 0;
}
