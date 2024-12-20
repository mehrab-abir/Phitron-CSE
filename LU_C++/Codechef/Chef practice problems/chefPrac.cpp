#include<bits/stdc++.h>
using namespace std;

int main(){
    int nProbs[4], countWeek=0;
    for(int i=0;i<4;i++){
        cout<<"Week "<<i+1<<": ";
        cin>>nProbs[i];
    }

    for(int i=0;i<4;i++){
        if(nProbs[i]>= 10){
            countWeek++;
        }
    }
    cout<<endl<<"Number of weeks chef solved at least 10 problems: "<<countWeek<<endl;

}
