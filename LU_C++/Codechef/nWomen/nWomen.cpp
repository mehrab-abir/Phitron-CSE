#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Number of test case: ";
    cin>>T;

    for(int i=1;i<=T;i++){
        int nWomen, countWomen=0;
        cout<<"Number of women in that village: ";
        cin>>nWomen;

        int w[nWomen];

        for(int i=0;i<nWomen;i++){
            cout<<"Age of candidate "<<i+1<<": ";
            cin>>w[i];
        }

        for(int i=0;i<nWomen;i++){
            if(w[i] >=10 &&  w[i] <=60){
                countWomen++;
            }
        }
        cout<<"Number of eligible women: "<<countWomen<<endl;
    }
    return 0;
}
