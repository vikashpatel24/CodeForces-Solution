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
        string s;
        cin>>n>>s;
        string ans;
        for(int i=0; i<2*n-1; i+=2)
        {
            ans+=s[i];
        }
        cout<<ans<<endl;
    }
}

