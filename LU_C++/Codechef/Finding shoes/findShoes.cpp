#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Number of test cases: ";
    cin>>t;

    for(int i=1;i<=t;i++){
        int nFrnds,mLeft, counter=0;
        cout<<"Number of friends: ";
        cin>>nFrnds;
        cout<<"Number of left shoes already chef has: ";
        cin>>mLeft;

        if(mLeft >= nFrnds){
            cout<<"Number of extra shoes to buy: "<<nFrnds<<endl;
        }
        else{
            for(int i=mLeft;i<nFrnds;i++){
                counter++;
            }
            cout<<"Number of extra shoes to buy: "<<nFrnds+counter<<endl;
        }
    }
    return 0;
}
