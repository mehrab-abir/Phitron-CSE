#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin>>A>>B;

    int counter = 0;
    if(A>B){
        for(int i=B;i<A;i++){
            counter++;
        }
    }
    else if(B>A){
        for(int i=A;i<=B;i++){
            counter++;
        }
    }
    else{
        counter = 0;
    }

    cout<<counter<<endl;
    return 0;
}
