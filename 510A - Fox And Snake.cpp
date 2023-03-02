#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,m;
    cin>>n>>m;
    int c=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(c%2==0)
            {
                cout<<"#";
                for(int j=1;j<m;j++)
                {
                    cout<<".";
                }
            cout<<endl; 
            }
            else
            {
                for(int j=1;j<m;j++)
                {
                    cout<<".";
                }
                cout<<"#";
                cout<<endl;
            }
            c++;
        }
        else
        {
            for(int j=1;j<=m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
    }
}