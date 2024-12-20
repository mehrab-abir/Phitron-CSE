#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    cout<<"Type something: ";
    getline(cin,str);

    for(int i=0;i<str.size();i++){
        //cout<<str[i]<<endl; //do something
        if(str[i]=='a'){
            str[i]='x';
        }
    }
    cout<<endl<<str;

    return 0;
}
