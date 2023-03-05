#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string ans;
    int n=s.size();
    for(int i=n/2;i<n-1;i++)
    {
        if(s[i]!='+')
        {
            ans+=s[i];
            ans+='+';
        }
    }
    ans+=s[n-1];
    cout<<ans<<endl;
}
