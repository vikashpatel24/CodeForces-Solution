#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,m;
    cin>>n>>m;
    char pixel[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>pixel[i][j];
        }
    }
    
    
    bool color=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(pixel[i][j]=='C' || pixel[i][j]=='M' || pixel[i][j]=='Y')
            {
            color=true;
            break;
            }
        }
    }
    
    
    if(color)
    cout<<"#Color"<<endl;
    else
    cout<<"#Black&White"<<endl;
}
    







