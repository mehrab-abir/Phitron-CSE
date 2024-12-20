#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Number of items: ";
    cin>>n;

    int items[n];
    for(int i=0;i<n;i++){
        cout<<"Item "<<i+1<<": ";
        cin>>items[i];
    }

    for(int i=0;i<n;i++){
        int pickedItem = items[i];
        int j=i-1;
        while(j>=0 && items[j]>pickedItem){
            items[j+1] = items[j];
            j--;
        }
        items[j+1] = pickedItem;
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<items[i]<<" ";
    }

}
