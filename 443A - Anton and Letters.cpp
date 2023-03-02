#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    string s;
    getline(cin,s);
    set<char> ans;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{' || s[i]==',' || s[i]==' ' || s[i]=='}')
        continue;
        else
        ans.insert(s[i]);
    }
    cout<<ans.size()<<endl;
}