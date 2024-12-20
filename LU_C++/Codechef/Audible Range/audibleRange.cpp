#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;

    cout<<"number of test cases: ";
    cin>>testCases;

    for(int i=1;i<=testCases;i++){
        int f;
        cout<<"Frequency of command: ";
        cin>>f;

        if((f>=67) && (f <=45000)){
            cout<<"Audible"<<endl;
        }
        else{
            cout<<"Not Audible"<<endl;
        }
    }

}
