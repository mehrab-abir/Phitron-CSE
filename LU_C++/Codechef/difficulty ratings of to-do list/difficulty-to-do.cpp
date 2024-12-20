#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;

    cout<<"Number of test cases: ";
    cin>>testCase;

    for(int i=1;i<=testCase;i++){
        int nProblems, counter=0;
        cout<<"Number of problems: ";
        cin>>nProblems;

        int diff[nProblems];

        for(int i=0;i<nProblems;i++){
            cout<<"Difficulty rating of problem "<<i+1<<": ";
            cin>>diff[i];
        }

        for(int i=0;i<nProblems;i++){
            if(diff[i] >= 1000){
                counter++;
            }
        }
        cout<<endl<<"Number of problems to be removed from to-do list: "<<counter<<endl;
    }
}
