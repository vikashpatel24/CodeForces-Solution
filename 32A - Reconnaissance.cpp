#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,d;
    cin>>n>>d;
    int heights[n];
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
    }
    int ans=0;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
        if(abs(heights[j]-heights[k])<=d && j!=k)
        ans++;
        }
    }
    cout<<ans<<endl;
}
