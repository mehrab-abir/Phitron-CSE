#include<bits/stdc++.h>
using namespace std;

int main(){
    int matA[10][10], matB[10][10], matA_plus_matB[10][10], nRows, nCols, row, col;

    cout<<"How many rows: ";
    cin>>nRows;

    cout<<"How many columns: ";
    cin>>nCols;

    //input for matrix A
    cout<<"\nGive values for Matrix A:\n";
    for(row=0;row<nRows;row++){
        for(col=0;col<nCols;col++){
            cout<<"Matrix A["<<row+1<<"]["<<col+1<<"]= ";
            cin>>matA[row][col];
        }
        cout<<endl;
    }

    //input for matrix B
    cout<<"\nGive values for Matrix B:\n";
    for(row=0;row<nRows;row++){
        for(col=0;col<nCols;col++){
            cout<<"Matrix B["<<row+1<<"]["<<col+1<<"]= ";
            cin>>matB[row][col];
        }
        cout<<endl;
    }

    //printing matrix A
    cout<<"\nMatrix A: \n";
    for(row=0;row<nRows;row++){
        for(col=0;col<nCols;col++){
            cout<<matA[row][col]<<"\t";
        }
        cout<<endl;
    }

    //printing matrix B
    cout<<"\nMatrix B: \n";
    for(row=0;row<nRows;row++){
        for(col=0;col<nCols;col++){
            cout<<matB[row][col]<<"\t";
        }
        cout<<endl;
    }

    //adding A and B
    for(row=0;row<nRows;row++){
        for(col=0;col<nCols;col++){
            matA_plus_matB[row][col] = matA[row][col] + matB[row][col];
        }
    }

    //printing final output
    cout<<endl<<"Result:"<<endl;
    for(row=0;row<nRows;row++){
        for(col=0;col<nCols;col++){
            cout<<matA_plus_matB[row][col]<<"\t";
        }
        cout<<endl;
    }
}
