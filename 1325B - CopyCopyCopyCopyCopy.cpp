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
        set<int> ans;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ans.insert(x);
        }
        cout<<ans.size()<<endl;
    }
}