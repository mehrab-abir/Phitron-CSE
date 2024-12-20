#include<bits/stdc++.h>

using namespace std;

int main(){

    int row,col,numOfRows, numOfCols;

    cout<<"Number of rows: ";
    cin>>numOfRows;

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=row;col++){
            //cout<<col;
            //cout<<row;
            //cout<<col%2;
            //cout<<row%2;
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
