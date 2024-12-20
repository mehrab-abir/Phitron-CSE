#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Create an array >>"<<endl;
    cout<<"Size of the array: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    //showing the array
    cout<<"The original array >>"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    int delposit;

    cout<<"\nPosition of the element that is to be deleted: ";
    cin>>delposit;

    int delItem = arr[delposit];

    for(int i=delposit;i<n-1;i++){
        arr[i] = arr[i+1];
    }

    n = n -1; //size of the new array

    cout<<"\nNew array:\n";
    for(int i=0;i<n;i++){ //n is updated to new size
        cout<<arr[i]<<"\t";
    }

}
