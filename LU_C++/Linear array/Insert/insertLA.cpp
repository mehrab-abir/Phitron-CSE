#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Create an array >>"<<endl;
    cout<<"Size of the array: ";
    cin>>n;

    int arr[n], newArr[n+1];

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
        newArr[i] = arr[i];
    }

    //showing the array
    cout<<"The array >>"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    //inserting a new element
    int k,newItem;

    cout<<"\nIn which position new number to be inserted: "<<endl;
    cin>>k;

    cout<<"\nValue of the new number: "<<endl;
    cin>>newItem;

    for(int i=n;i>=k;i--){
        newArr[i+1] = newArr[i];
    }
    newArr[k] = newItem;

    cout<<"\nNew array: "<<endl;;
    for(int i=0;i<n+1;i++){
        cout<<newArr[i]<<"\t";
    }

    cout<<endl;
    cout<<"Old array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
