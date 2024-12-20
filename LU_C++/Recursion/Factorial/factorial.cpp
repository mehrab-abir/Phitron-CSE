#include<iostream>
using namespace std;

int factorial(int number){
    if(number<0){
        return(-1);
    }
    else if(number==0){
        return 1;
    }
    else{
        return number*factorial(number-1);
    }
}

int main(){

    int number;

    cout<<"Enter a number: ";
    cin>>number;

    int result= factorial(number);

    cout<<"Factorial of "<<number<<" is "<<result<<endl;

    return 0;
}
