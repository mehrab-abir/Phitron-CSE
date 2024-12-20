#include<bits/stdc++.h>
using namespace std;

//4- 4 8 12 16 20 24 28 32...
//8 - 8 16 24 32 40...
//8 16 24 32... >> least common multiple 8
int main(){
    int num1, num2, bigNum;

    cout<<"First number: ";
    cin>>num1;
    cout<<"Second number: ";
    cin>>num2;

    if(num1 > num2){
        bigNum = num1;
    }
    else{
        bigNum = num2;
    }
    A: if(bigNum%num1 == 0 && bigNum%num2 == 0){
        cout<<"Least common multiple: "<<bigNum<<endl;
    }
    else{
        bigNum++;
        goto A;
    }

    return 0;
}
