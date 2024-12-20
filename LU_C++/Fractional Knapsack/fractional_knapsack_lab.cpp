//Fractional Knapsack
//Time Complexity: O(N * log N)
//Auxiliary Space: O(N)

#include<bits/stdc++.h>
using namespace std;

struct Product
{
    int price;
    int weight;
    double u_price;
};

bool cmp(Product a, Product b)
{

    return a.u_price>b.u_price;
//if(a.u_price>b.u_price)return a.u_price;

}

int fractional_knapsack(Product arr[], int n, int W)
{
    int total=0;

    for(int i=0; i<n; i++)
    {
        arr[i].u_price = double(arr[i].price)/arr[i].weight;;
    }
    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++)
    {
        if(arr[i].weight<=W)
        {
            total+=arr[i].price;
            W-=arr[i].weight;
        }
        else
        {

            //to get fraction we have converted int(arr[i].weight) into
            // double(arr[i].weight).
            total+= arr[i].price*(W/double(arr[i].weight));
            break;
        }
    }


    return total;

}

int main()
{
    int n=3;
    int W=50;
    //cin>>W;
    //struct Product arr[]={{5,200000},{3,100000},{20, 50000}};
    //You can take manual input, I have hard coded for convenience.
    int p[]= {200000,100000,50000};
    int w[]= {5,3,20};


    Product pro[n];
    for(int i=0; i<n; i++)
    {
        pro[i].price=p[i];
        pro[i].weight=w[i];
    }

    double ans = fractional_knapsack(pro, n, W);

    cout<<ans<<endl;

    return 0;
}

