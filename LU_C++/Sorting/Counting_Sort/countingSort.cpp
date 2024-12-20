#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,maxNum = 0;

    cout<<"How many numbers to sort: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Item "<<i+1<<": ";
        cin>>arr[i];
        maxNum = max(maxNum,arr[i]);
    }
    int countArr[maxNum+1]={0};
    int outputArr[n];

    for(int i=0;i<n;i++){
        countArr[arr[i]]++;
    }
    for(int i=1;i<=maxNum;i++){
        countArr[i] = countArr[i]+countArr[i-1];
    }
    for(int i=n-1;i>=0;i--){
        outputArr[--countArr[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<outputArr[i]<<" ";
    }
}
