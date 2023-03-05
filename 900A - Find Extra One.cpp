#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    int leftcord=0;
    int rightcord=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        if(x[i]<0)
        {
            leftcord++;
        }
        else
        {
            rightcord++;
        }
    }
    if(leftcord==1 || rightcord==1 || (leftcord==0 && rightcord>0) || (leftcord>0 && rightcord==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}