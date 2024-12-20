#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;

    cout<<"Number of test cases: ";
    cin>>testCase;

    for(int i=1;i<=testCase;i++){
        int num1, num2, num3;

        cout<<"Number 1 = ";
        cin>>num1;
        cout<<"Number 2 = ";
        cin>>num2;
        cout<<"Number 3 = ";
        cin>>num3;

        if((num1+num2)%2 != 0 || (num1+num3)%2 != 0 || (num2+num3)%2 != 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}
