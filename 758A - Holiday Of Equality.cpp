#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int a[n];
    int maxWelfare=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxWelfare=max(maxWelfare,a[i]);
    }
    int burles=0;
    for(int j=0;j<n;j++)
    {
        burles+=(maxWelfare-a[j]);
    }
    cout<<burles<<endl;
}
    








