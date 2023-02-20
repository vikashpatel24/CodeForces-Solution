#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i=1;i<=n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        cout<<(n-3)/2+1<<endl;
        for(int i=1;i<=(n-3)/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
}
    







