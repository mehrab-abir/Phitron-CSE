#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;

    cout<<"String 1: ";
    getline(cin,str1);

    //cout<<"String 2: ";
    //getline(cin,str2);

    //cout<<"String 1: "<<str1<<endl<<"String 2: "<<str2<<endl;

    /*str1.swap(str2);
    cout<<"After swapping: "<<endl;
    cout<<str1<<endl<<str2<<endl;*/

    char arr[10];
    str1.copy(arr,2,5); //Copy 2 characters from str1 into arr, starting from index 5
    cout<<arr<<endl;

    return 0;
}
