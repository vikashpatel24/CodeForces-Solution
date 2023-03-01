#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,m;
    cin>>n>>m;
    int lights[n][2*m];  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*m;j++)
        {
            cin>>lights[i][j];  // n String can also be taken as input
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*m;j+=2)
        {
            if(lights[i][j]==1 || lights[i][j+1]==1)
            ans++;
        }
    }
    cout<<ans<<endl;
}