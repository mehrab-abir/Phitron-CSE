#include<bits/stdc++.h>
using namespace std;

/*
Harry would like to withdraw X $US from an ATM. The cash machine will only accept the transaction
if X is a multiple of 5, and Harry's account balance has enough cash to perform the withdrawal
transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US.

Calculate Harry's account balance after an attempted transaction.
*/

int main(){
    float accountBalance;
    int drawAmount;

    cout<<"$0.5 charge applied to each transaction."<<endl;

    cout<<"Enter current balance: ";
    cin>>accountBalance;
    cout<<"How much you want to withdraw: ";
    cin>>drawAmount;

    if(drawAmount%5 == 0){
        float remainingBalance = accountBalance-(drawAmount+0.5);
        if(remainingBalance < 0){
            cout<<"Current balance: $"<<accountBalance<<". Not enough money to withdraw."<<endl;
        }
        else{
            cout<<"Transaction successful. Remaining Balance: $"<<fixed<<setprecision(2)<<remainingBalance<<endl;
        }
    }
    else{
        cout<<"Amount is not accepted if it's not multiple of 5."<<endl;
    }
}
