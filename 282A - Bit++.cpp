#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout<<x<<endl;
}
