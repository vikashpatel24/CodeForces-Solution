#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            c++;
        }
        else
        {
            c=0;
        }
        ans=max(c,ans);
    }
    cout<<ans+1<<endl;
    
}