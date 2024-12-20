#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cout<<"Test case: ";
	cin>>T;

	for(int i=1;i<=T;i++){
	    int X,Y;
	    cout<<"Number of problems submitted: ";
	    cin>>X;

	    cout<<"Number of submissions approved: ";
	    cin>>Y;

	    if((Y*100)/X >= 50){
	        cout<<"yes, expert"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
