#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool checkMeow( string s, int n)
{
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    int m,e,o,w;
    m=e=o=w=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='m')
        m++;
        else
        break;
    }
    for(int i=m;i<n;i++)
    {
        if(s[i]=='e')
        e++;
        else
        break;
    }
    for(int i=m+e;i<n;i++)
    {
        if(s[i]=='o')
        o++;
        else
        break;
    }
    for(int i=m+e+o;i<n;i++)
    {
        if(s[i]=='w')
        w++;
        else
        break;
    }
    if(m+e+o+w==n && m>0 && e>0 && o>0 && w>0)
    return true;
    else
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(checkMeow(s,n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}

