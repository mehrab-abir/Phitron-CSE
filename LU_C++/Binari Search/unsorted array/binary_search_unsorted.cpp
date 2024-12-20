#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"How many numbers: ";
    cin>>n;

    int ara[n];

    for(int i=0;i<n;i++){
        cout<<"Number "<<i+1<<": ";
        cin>>ara[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(ara[j]>ara[j+1]){
                int temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
    cout<<endl<<"After sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
    }
    cout<<endl;

    int maxIndex, minIndex, midIndex, searchNum;
    maxIndex = n-1;
    minIndex = 0;
    midIndex = (maxIndex+minIndex)/2;

    cout<<"Search a number: ";
    cin>>searchNum;

    while(minIndex <= maxIndex  && searchNum != ara[midIndex]){
        if(searchNum > ara[midIndex]){
            minIndex = midIndex+1;
        }
        else{
            maxIndex = midIndex-1;
        }
        midIndex = (maxIndex+minIndex)/2;
    }
    if(searchNum == ara[midIndex]){
        cout<<searchNum<<" is found at position "<<midIndex+1<<endl;
    }
    else{
        cout<<searchNum<<" is not found."<<endl;
    }

    return 0;
}
