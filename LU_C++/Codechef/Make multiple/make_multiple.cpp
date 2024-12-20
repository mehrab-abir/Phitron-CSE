#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;

	for(int i=1;i<=T;i++){
	    int A,B,X, nA, nB;
        cin>>A>>B>>X;
	    /*
	        if b+x%a+x == 0
	    */
	    nA = A+X;
	    nB = B+X;

	    if(A<=B){
	        if(nB%nA == 0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
