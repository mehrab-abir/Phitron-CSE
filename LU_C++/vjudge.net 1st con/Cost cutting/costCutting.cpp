#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Number of test cases: ";
    cin>>t;

    for(int i=1;i<=t;i++){
        int a,b,c, biggest, smallest;
        cin>>a>>b>>c;

        if(a>b && a>c){
            biggest = a;
        }
        else if(b>a && b>c){
            biggest = b;
        }
        else{
            biggest = c;
        }

        if(a<b && a<c){
            smallest = a;
        }
        else if(b<a && b<c){
            smallest = b;
        }
        else{
            smallest = c;
        }

        if(biggest == a && smallest == b || biggest == b && smallest == a ){
            cout<<"surviver: "<<c<<endl;
        }
        if(biggest == a && smallest == c || biggest == c && smallest == a){
            cout<<"Survivor: "<<b<<endl;
        }
        if(biggest == b && smallest == c || biggest == c && smallest == b){
            cout<<"survivor: "<<a<<endl;
        }

    }

    return 0;
}
