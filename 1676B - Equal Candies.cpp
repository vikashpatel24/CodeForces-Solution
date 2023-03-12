#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c[n];
        int mini = INT_MAX;
        long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
            sum += c[i];
            mini = min(mini, c[i]);
        }
        cout<<sum-(n*mini)<<endl;
    }
}