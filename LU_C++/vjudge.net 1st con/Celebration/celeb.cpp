#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cout<<"Number of friends: ";
        cin>>n;

        int p[n], price=0;
        for(int i=0;i<n;i++){
            cout<<"Friend"<<i+1<<" wants: ";
            cin>>p[i];
        }
        int naruto, price_per_bowl;
        cout<<"Naruto has: ";
        cin>>naruto;

        cout<<"Price of each bowl: ";
        cin>>price_per_bowl;

        for(int i=0;i<n;i++){
            price = price + p[i]*price_per_bowl;
        }
        cout<<price-naruto<<endl;
    }
}
