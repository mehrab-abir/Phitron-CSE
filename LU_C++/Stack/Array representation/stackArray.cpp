#include<bits/stdc++.h>
using namespace std;

int TOP = 0, maxStack;

void PUSH(int stk[], int data){
    if(TOP == maxStack){
        cout<<"Overflow";
        exit(1);
    }
    TOP++;
    stk[TOP] = data;
}

void POP(int stk[]){
    if(TOP==0){
        cout<<"Underflow";
        exit(1);
    }
    //int item = stk[TOP];
    TOP--;

    return;
}

//PRINTING STACK ELEMENTS
void display(int stk[]){
    if(TOP>0){
        cout<<"Stack elements are: "<<endl;
        for(int i=TOP;i>=1;i--){
            cout<<stk[i]<<endl;
        }
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
}

int main(){
    cout<<"Maximum size of the stack: ";
    cin>>maxStack;

    int stk[maxStack];

    //PUSH(stk,20);
    //PUSH(stk,40);
    //PUSH(stk,50);
    //PUSH(stk,60);

    int items,x;

    cout<<"How many items you want to push: ";
    cin>>items;

    for(int i=1;i<=items;i++){
        cout<<"Item "<<i<<": ";
        cin>>x;

        PUSH(stk,x);
    }

    display(stk);

    POP(stk);
    POP(stk);
    //PUSH(stk,100);
    //PUSH(stk,500);

    cout<<endl<<"After POP operation, ";

    display(stk);
}
