#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int n, counter = 0;
    cin>>n;

    char str[n];
    gets(str);

    for(int i=0;i<n;i++){
        if(str[i] == 'A'){
            counter++;
        }
    }
    cout<<counter<<endl;

    return 0;
}
