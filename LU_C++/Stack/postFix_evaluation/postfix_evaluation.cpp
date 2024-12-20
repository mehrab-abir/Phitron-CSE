#include<bits/stdc++.h>
using namespace std;

int TOP = 0;

void PUSH(char stk[], int ch){
    TOP++;
    stk[TOP] = ch;
}
int POP(char stk[]){
    int n1 = stk[TOP];
    int n2 = stk[TOP-1];
    int s = n1+n2; //?

    TOP = TOP-2;

    PUSH(stk,s);
}

int main(){
    vector<string>exp;

    int n;
    cout<<"How many items: ";
    cin>>n;

    string x;

    for(int i=0;i<n;i++){
        cout<<"Items: ";
        cin>>x;
        exp.push_back(x);
    }

//    for(int i=0;i<n;i++){
//        cout<<exp[i]<<" ";
//    }

    char stk[n];

    for(int i=0;i<n;i++){
        if(exp[i]>=1 && exp[i]<=1000){
            PUSH(stk,exp[i]);
        }
        else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/'){
            POP(stk);
        }
        else if(exp[i]==')'){
            cout<<"Ans: "<<stk[TOP];
        }
    }




    return 0;
}
