#include<bits/stdc++.h>
using namespace std;

struct Products{
    int price;
    int weight;
    double unitPrice;
};

bool cmp(Products a, Products b)
{
    return a.unitPrice>b.unitPrice;
}

double fracKnapsack(Products arr[],int n,int wCapacity){
    double total = 0;

    for(int i=0; i<n; i++)
    {
        arr[i].unitPrice = double((arr[i].price)/arr[i].weight);
    }
    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++)
    {
        if(arr[i].weight<=wCapacity)
        {
            total+=arr[i].price;
            wCapacity-=arr[i].weight;
        }
        else{
            total+= arr[i].price*(wCapacity/double(arr[i].weight));
            break;
        }
    }
    return total;

}

int main(){
    int n, capacity;
    cout<<"Enter number of items: ";
    cin>>n;
    cout<<"Enter maximum capacity: ";
    cin>>capacity;

    int values[n], weight[n];
    for(int i=0;i<n;i++){
        cout<<"Value and weight: ";
        cin>>values[i]>>weight[i];
    }

    struct Products arr[n];
    for(int i=0;i<n;i++){
        arr[i].price = values[i];
        arr[i].weight = weight[i];
    }
    double totalPrice = fracKnapsack(arr,n,capacity);

    cout<<"Total price: "<<totalPrice<<endl;

}
