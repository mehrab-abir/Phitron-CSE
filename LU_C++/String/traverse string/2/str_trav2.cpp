#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int countVowel = 0;
    cout<<"Type something ( only lower case): ";
    getline(cin,str);

    for(char c:str){
        cout<<c<<"\t"; // do something
        if(c == 'a' || c == 'i' || c=='o' || c=='e' || c=='u'){
            countVowel++;
        }
    }
    cout<<endl<<"Number of vowels: "<<countVowel<<endl;
    return 0;
}
