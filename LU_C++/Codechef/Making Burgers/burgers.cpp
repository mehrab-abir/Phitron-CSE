#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Number of test cases: ";
    cin>>T;

    for(int i=1;i<=T;i++){
        int X, Y;

        cout<<"Number of Patties: ";
        cin>>X;

        cout<<"Number of Buns: ";
        cin>>Y;

        if(X < Y){
            cout<<X<<" Burgers can be made."<<endl;
        }
        else{
            cout<<Y<<" Burgers can be made."<<endl;
        }
    }
}
