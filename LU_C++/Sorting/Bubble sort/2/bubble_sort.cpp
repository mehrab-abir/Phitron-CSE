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

    for(int i=0;i<n;i++){
        cout<<"Pass: "<<i+1<<": "<<endl;
        for(int j=0;j<n-i-1;j++){
            if(ara[j]>ara[j+1]){
                int temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
            for(int k=0;k<n;k++){
                cout<<"\t"<<ara[k]<<" ";
            }
            cout<<endl;
        }
    }

    cout<<endl<<"Sorted numbers: "<<endl;

    for(int i=0;i<n;i++){
        cout<<ara[i]<<"\t";
    }

    return 0;
}
