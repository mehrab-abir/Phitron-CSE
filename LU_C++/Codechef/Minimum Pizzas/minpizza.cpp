#include<bits/stdc++.h>
using namespace std;

int main(){
    double numberOfFriends, slicePerFriend, testCases;

    cout<<"Number of test cases: ";
    cin>>testCases;

    for(int i=1;i<=testCases;i++){
        cout<<"\nNumber of friends: ";
        cin>>numberOfFriends;

        cout<<"How many slices of Pizza does each friend want to eat? Ans: ";
        cin>>slicePerFriend;

        double numOfPizza = ceil((numberOfFriends * slicePerFriend) / 4);
        cout<<"\nNumber of Pizzas to order: "<<numOfPizza<<endl;
    }
}
