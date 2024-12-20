#include<bits/stdc++.h>
using namespace std;

int TOP = 0, maxStack;

void PUSH(char stk[], char ch){
    if(TOP == maxStack){
        cout<<"Overflow"<<endl;
        exit(1);
    }
    TOP++;
    stk[TOP] = ch;
}

int POP(char stk[]){
    if(TOP==0){
        cout<<"Underflow."<<endl;
        exit(1);
    }
    char op = stk[TOP];
    TOP--;

    return op;
}

void check(char stk[], char ch){
    if((stk[TOP] == '^' || stk[TOP] == '*' || stk[TOP] == '/') && (ch == '+' || ch == '-')){
        char op = POP(stk);
        cout<<op<<" ";
        PUSH(stk,ch);
    }
    else if((stk[TOP] == '^') && (ch == '*' || ch == '/')){
        char op = POP(stk);
        cout<<op<<" ";
        PUSH(stk,ch);
    }
    else{
        PUSH(stk,ch);
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        string exp;

        getchar();
        cout<<endl<<"Enter the infix expression: "<<endl;
        getline(cin,exp);

        exp = "(" + exp + ")";

        maxStack = exp.size();

        char stk[maxStack];

        for(int i=0;i<maxStack;i++){
            if((exp[i]>='A' && exp[i]<='Z')||(exp[i]>='a' && exp[i]<='z')){
                cout<<exp[i]<<" ";
            }
            else if(exp[i] == '('){
                PUSH(stk,'(');
            }
            else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^'){
                check(stk,exp[i]);
            }
            else if(exp[i] == ')'){
                while(stk[TOP]!='('){
                    char op = POP(stk);
                    cout<<op<<" ";
                }
                POP(stk);
            }
        }
    }

    return 0;
}
