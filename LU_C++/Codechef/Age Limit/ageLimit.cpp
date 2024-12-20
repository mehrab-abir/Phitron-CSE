#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase, minAge, maxAge, candidateAge;

    cout<<"Test case: ";
    cin>>testCase;

    for(int i=1;i<=testCase;i++){
        cout<<"Minimum age: ";
        cin>>minAge;

        cout<<"Maximum age: ";
        cin>>maxAge;

        cout<<"Candidate age: ";
        cin>>candidateAge;

        if(candidateAge < minAge){
            cout<<"You are too young to take the test."<<endl;
        }
        else if(candidateAge >= maxAge){
            cout<<"You are too old to take the test."<<endl;
        }
        else{
            cout<<"You are eligible"<<endl;
        }
    }

}
