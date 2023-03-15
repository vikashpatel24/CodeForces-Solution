#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool check(char c)
{
    string s ="codeforces";
    for(auto i : s)
    {
        if(i==c)
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    char c;
    cin>>c;
    if(check(c))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
}