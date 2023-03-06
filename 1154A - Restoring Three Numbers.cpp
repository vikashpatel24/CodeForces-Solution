#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int x[4];
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }
    sort(x,x+4);
    for(int i=0;i<3;i++)
    {
        cout<<x[4-1]-x[i]<<" ";
    }
    cout<<endl;
}