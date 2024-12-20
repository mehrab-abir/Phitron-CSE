#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"How many numbers you want to sort: ";
    cin>>n;

    int ara[n];

    for(int i=0;i<n;i++){
        cout<<"Number "<<i+1<<":";
        cin>>ara[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(ara[j]>ara[j+1]){
                int temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
    }

    return 0;
}
