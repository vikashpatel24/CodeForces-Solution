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
        long long c[n];
        long long o[n];
        long long minC = INT_MAX;
        long long minO = INT_MAX;
        for(long long i=0; i<n; i++)
        {
            cin>>c[i];
            minC = min(minC, c[i]);
        }
        for(int i=0; i<n; i++)
        {
            cin>>o[i];
            minO = min(minO, o[i]);
        }
        long long minMoves=0;
        for(int i=0;i<n;i++)
        {
            minMoves += max((c[i]-minC), (o[i]-minO));
        }
        cout<<minMoves<<endl;
    }
}
