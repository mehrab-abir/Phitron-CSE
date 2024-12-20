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
        arr[i].unitPrice = double(arr[i].price)/arr[i].weight;
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
    int N, W;
    cin>>N>>W;

    int values[N], weight[N];
    int v[N], w[N];
    for(int i=0;i<N;i++){
        cin>>values[i]>>weight[i];
    }

    Products arr[N];
    for(int i=0;i<N;i++){
        arr[i].price = v[i];
        arr[i].weight = w[i];
    }
    double totalPrice = fracKnapsack(arr,N,W);
    int TotalPrice = totalPrice;

    if(TotalPrice==totalPrice){
        cout << TotalPrice << endl;
    }
    else{
        cout<<fixed<<setprecision(8)<<totalPrice<<endl;
    }
}
