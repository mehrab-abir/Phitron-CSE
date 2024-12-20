#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Number of test cases: ";
    cin>>T;

    for(int i=1;i<=T;i++){
        int initA, initB, finC, finD;

        cout<<"Initial score of team 1 and team 2: ";
        cin>>initA>>initB;

        cout<<"Final score of team 1 and team 2: ";
        cin>>finC>>finD;

        //finC >= initA and finD >= initB

        if(finC >= initA && finD >= initB){
            cout<<"Possible"<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}
