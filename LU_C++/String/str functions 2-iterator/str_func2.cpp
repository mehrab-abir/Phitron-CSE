#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    cout<<"Type something: ";
    getline(cin,str1);

    string::iterator it1;
    cout<<endl<<"After iteration:"<<endl;
    for(it1=str1.begin();it1 !=str1.end();it1++){
        cout<<*it1;
    }

    //reverse iteration
    string::reverse_iterator rev;
    cout<<endl<<"Reverse iteration: "<<endl;
    for(rev=str1.rbegin();rev !=str1.rend();rev++){
        cout<<*rev;
    }

    return 0;
}
