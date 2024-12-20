#include<bits/stdc++.h>
using namespace std;

/*
There are 100100 questions in a paper. Each question carries +3 marks for correct answer,
-1 marks for incorrect answer and 0 marks for unattempted question.
It is given that Chef received exactly X(0≤X≤100) marks. Determine the minimum number
of problems Chef marked incorrect.
*/

int main(){
    int T;
    cout<<"Number of test case: ";
    cin>>T;

    for(int i=1;i<=T;i++){
        int marks;
        cout<<"Obtained marks: ";
        cin>>marks;

        int incorrect = ceil(float(marks)/3)*3 - marks;

        cout<<"Number of incorrect answer: "<<incorrect<<endl;
    }
    return 0;
}
