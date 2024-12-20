#include<bits/stdc++.h>
using namespace std;
/*
    Vasya likes the number 239239. Therefore, he considers a number pretty if its last digit is 22, 33 or 99.
    Vasya wants to watch the numbers between LL and RR (both inclusive), so he asked you to determine how many
    pretty numbers are in this range. Can you help him?
*/

int main(){
    int t;
    cout<<"Number of test cases: ";
    cin>>t;

    for(int i=1;i<=t;i++){
        int strtNum, endNum, counter=0;;

        cout<<"Starting number: ";
        cin>>strtNum;
        cout<<"Ending number: ";
        cin>>endNum;

        for(int i=strtNum;i<=endNum;i++){
           if(i%10 == 2 || i%10 == 3 || i%10 == 9){
                counter++;
                cout<<i<<"\t";
            }
        }
        cout<<endl<<"Number of pretty numbers: "<<counter<<endl;
    }
    return 0;
}
