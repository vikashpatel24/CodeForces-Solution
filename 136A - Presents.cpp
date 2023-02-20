#include<bits/stdc++.h>
using namespace std;

// Code written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int p;
    int ans[n];
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        ans[p]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
} 
