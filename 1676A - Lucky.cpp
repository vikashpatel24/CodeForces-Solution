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
        string s;
        cin>>s;
        int left=0,right=0;
        for(int i=0;i<3;i++)
        {
            left+=s[i]-'0';
            right+=s[5-i]-'0';
        }
        cout<<((left==right)? "YES" : "NO")<<endl;
    }
}