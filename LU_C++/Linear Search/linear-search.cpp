#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]= {2,6,8,9,10,3,6,45,12,25,43,53};

    int value, i, position = -1;

    cout<<"Search a number: ";
    cin>>value;

    for(i=0;i<12;i++){
        if(value == arr[i]){
            position = i+1;
        }
    }

    if(position == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"The number is found at position "<<position<<endl;
    }

}
