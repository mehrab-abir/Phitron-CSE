#include<iostream>

using namespace std;

int main(){
    char name[30];
    int age;

    cout <<"Your name: ";
    cin >> name;

    cout<<"Your age: ";
    cin >> age;

    cout <<"Hello Mr. " <<name<<", you are "<<age<<" years old"<<endl;

    //endl is used to jump in a new line,,same task is done in C using \n.
}
