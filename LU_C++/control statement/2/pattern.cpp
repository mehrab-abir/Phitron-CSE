#include<bits/stdc++.h>
using namespace std;

int main(){

    int row, col, nRows, nCols;

    cout<<"Number of rows: ";
    cin>>nRows;

    cout<<"Number of columns: ";
    cin>>nCols;

    for(row=1;row<=nRows;row++){
        for(col=1;col<=nCols;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
