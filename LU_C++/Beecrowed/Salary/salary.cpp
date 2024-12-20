//#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int number, worked_houres;
    float per_hour,salary;

    cout<<"Number = ";
    cin>>number;
    cout<<"Number of hours worked = ";
    cin>>worked_houres;
    cout<<"Rate per hour = ";
    cin>>per_hour;

    salary = worked_houres*per_hour;

    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = US$ "<<salary<<endl;
}
