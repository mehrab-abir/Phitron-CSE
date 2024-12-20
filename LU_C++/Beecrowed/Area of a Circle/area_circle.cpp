#include<bits/stdc++.h>

#define PI 3.14159

using namespace std;

int main() {

    double A, R;

    cout<<"Radius of the circle: ";
    cin>>R;

    A = PI*(R*R);

    cout<<"Area= "<<fixed<<setprecision(2)<<A<<endl;

    return 0;
}
