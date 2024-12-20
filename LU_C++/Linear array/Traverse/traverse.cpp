#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10], n;

    cout<<"How many numbers: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr[i];
    }

    //visiting every element and performing an operation

    cout<<"Traversing and doing something..."<<endl; //you may do whatever you want
    for(int i=0;i<n;i++){
        int result = arr[i]*arr[i];
        cout<<result<<endl;
    }

}
