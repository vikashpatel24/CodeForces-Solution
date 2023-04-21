//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int solve(string s)
{
    int ans=1;
    if(s[0]=='0')
    return 0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]=='?')
        ans *= 10;
    }
    if(s[0]=='?')
    ans *= 9;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}
