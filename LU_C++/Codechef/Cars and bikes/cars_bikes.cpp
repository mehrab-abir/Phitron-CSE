#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;

    cout<<"Number of test cases:";
    cin>>T;

    for(int i=1;i<=T;i++){
        int nTyres;

        cout<<"Number of tyres company has: ";
        cin>>nTyres;

        if(nTyres==2 || nTyres==3){
            cout<<"One bike is possible to manufacture"<<endl;
        }
        else if(nTyres%4==0 || nTyres%4==1){
            cout<<"No bikes can be manufactured."<<endl;
        }
        else{
            cout<<"One bike is possible to manufacture"<<endl;
        }
    }

    return 0;
}
