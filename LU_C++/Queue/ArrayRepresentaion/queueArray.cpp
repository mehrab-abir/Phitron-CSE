#include<bits/stdc++.h>
using namespace std;

int FRONT=0, REAR=0, maxQ = 5;
char q[6];

void PUSH(char ch){
    if(FRONT==1 && REAR==maxQ || FRONT == REAR+1){
        cout<<"Overflow"<<endl;
        exit(1);
    }
    else if(FRONT==0){
        FRONT++;
        REAR++;
    }
    else if(REAR==maxQ){
        REAR=1;
    }
    else{
        REAR++;
    }
    q[REAR] = ch;

    return;
}

void POP(){
    if(FRONT==0){
        cout<<"Underflow"<<endl;
        exit(1);
    }
    char ch = q[FRONT];

    if(FRONT==REAR){
        FRONT=0;
        REAR=0;
    }
    else if(FRONT==maxQ){
        FRONT=1;
    }
    else{
        FRONT++;
    }
    return;
}

void printQ(){
    cout<<"Front = "<<FRONT<<", REAR = "<<REAR<<endl;

    if(FRONT==0 && REAR == 0){
        cout<<"Queue is empty"<<endl;
        return;
    }
    for(int i=FRONT;;){
        if(i==REAR){
            cout<<q[i]<<" ";
            break;
        }
        else if(i==maxQ){
            cout<<q[i]<<" ";
            i=1;
        }
        else{
            cout<<q[i]<<" ";
            i++;
        }
    }
    cout<<endl;
}

int main(){
    printQ();

    PUSH('A');
    PUSH('B');
    PUSH('C');

    printQ();

    POP();

    printQ();

    PUSH('D');
    PUSH('E');

    printQ();

    POP();
    POP();

    printQ();

    PUSH('F');

    printQ();

    POP();

    printQ();

    PUSH('G');
    PUSH('H');

    printQ();

    POP();

    printQ();

    POP();

    printQ();

    PUSH('K');

    printQ();

    POP();
    POP();

    printQ();

    POP();

    printQ();


    return 0;
}
