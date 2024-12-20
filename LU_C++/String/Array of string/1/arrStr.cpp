#include<iostream>
#include<string>
using namespace std;

int main(){
    //using pointer
    const char *color[] = {"Blue","Red","Green","Cyan"};

    //using 2D array
    char colors[4][10] = {"Blue","Red","Green","Cyan"};
    //first size(4 or any) is not mandatory,but second size (10 or any size) is mandatory

    for(int i=0;i<4;i++){
        cout<<colors[i]<<endl;
    }
    cout<<endl;
    char country[][20] = {"Bangladesh","Pakistan","Canada","USA","Australia"};
    int array_size = sizeof(country)/sizeof(country[0]);

    for(int i=0;i<array_size;i++){
        cout<<country[i]<<endl;
    }
    cout<<"Array Size: "<<array_size<<endl;

    return 0;
}

