#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[15] = {2,4,5,6,9,10,15,18,19,22,23,25,30,32,35};

    int maxIndex = 14, minIndex = 0;
    int midIndex;
    int num = 10;

    while(minIndex <= maxIndex){
        midIndex = (minIndex+maxIndex)/2;
        if(num == arr[midIndex]){
            break;
        }
        if(num < arr[midIndex]){
            maxIndex = midIndex - 1;
        }
        else{
            minIndex = midIndex + 1;
        }
    }
    if(minIndex > maxIndex){
        cout<<num<<" is not found in the array"<<endl;
    }
    else{
        cout<<num<<" is found and its index is "<<midIndex+1<<endl;
    }

}
