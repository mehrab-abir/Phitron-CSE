#include<bits/stdc++.h>
using namespace std;

int main(){

//    string str;
//
//    cout<<"Enter a string: ";
//    getline(cin,str);
//    str.push_back('A');
//    cout<<"New string: "<<str<<endl;

    string str2;

    cout<<"Type something: ";
    getline(cin,str2);

//    str2.pop_back();
//    cout<<"After modification: "<<str2<<endl;

    //cout<<str2.capacity()<<endl;

    int n;
    cout<<"resize the str: ";
    cin>>n;
    str2.resize(n);
    cout<<endl<<"After resizing: "<<str2<<endl;

    /*
    str2.resize(4);
    cout<<"After resizing: "<<str2<<endl;
    */

    //length
    cout<<"Size of "<<str2<<": "<<str2.size()<<endl;
    cout<<"Length of "<<str2<<": "<<str2.length()<<endl;



    return 0;
}
