#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Number of test cases: ";
    cin>>T;

    for(int i=1;i<=T;i++){
        string intNum;
        int counter =0;

        cout<<"Enter an integer number: ";
        getline(cin,intNum);

        for(int i=0;i<intNum.size();i++){
            if(intNum[i] == '4'){
                counter++;
            }
        }
        cout<<"Number of 4s: "<<counter<<endl;
    }
    return 0;
}
