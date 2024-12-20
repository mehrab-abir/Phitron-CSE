//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

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

    for(int i=0;i<n;i++){
        cout<<exp[i]<<" ";
    }

    return 0;
}
