#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    char ch[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ch[i][j];
        }
    }
    int ans=0, c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c=0;
            if(ch[i][j]=='C')
            {
                for(int k=i+1;k<n;k++)
                {
                    if(ch[k][j]=='C')
                    c++;
                }
                for(int k=j+1;k<n;k++)
                {
                    if(ch[i][k]=='C')
                    c++;
                }
            }
            ans+=c;
        }
    }
    cout<<ans<<endl;
}