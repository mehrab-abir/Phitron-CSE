#include<bits/stdc++.h>
using namespace std;
//12- 1 2 3 4 6 12
//16- 1 2 4 8 16
//1 2 4 >> greatest common divisor 4
int main(){
    int num1, num2, smallNum;

    cout<<"First number: ";
    cin>>num1;
    cout<<"Second number: ";
    cin>>num2;

    if(num1 < num2){
        smallNum = num1;
    }
    else{
        smallNum = num2;
    }
    A: if(num1%smallNum == 0 && num2%smallNum == 0){
        cout<<"Greatest common divisor: "<<smallNum<<endl;
    }
    else{
        smallNum = smallNum-1;
        goto A;
    }
    return 0;
}
