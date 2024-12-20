#include<bits/stdc++.h>
using namespace std;

// gcd <= smaller number
// lcm >= bigger number

int main(){
    int testCase;

    cout<<"Number of test cases: ";
    cin>>testCase;

    for(int i=1;i<=testCase;i++){
        int num1, num2, smallNum, bigNum;
        cout<<endl;

        cout<<"First number: ";
        cin>>num1;
        cout<<"Second number: ";
        cin>>num2;

        if(num1 > num2){
            bigNum = num2;
            smallNum = num1;
        }
        else{
            bigNum = num1;
            smallNum = num2;
        }
        lcm: if(bigNum%num1 == 0 && bigNum%num2 == 0){
            cout<<"Least common multiple: "<<bigNum<<endl;
        }
        else{
            bigNum++;
            goto lcm;
        }
        gcd: if(num1%smallNum == 0 && num2%smallNum == 0){
            cout<<"Greatest common divisor: "<<smallNum<<endl;
        }
        else{
            smallNum--;
            goto gcd;
        }
    }
    return 0;
}
