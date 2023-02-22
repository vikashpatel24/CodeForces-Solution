#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,c;
    cin>>n>>c;
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    int remainingWords=0;
    for(int i=1;i<n;i++)
    {
        if((t[i]-t[i-1])<=c)
        remainingWords++;
        else
        remainingWords=0;
    }
    cout<<remainingWords+1<<endl;
}
    







