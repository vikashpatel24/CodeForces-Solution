#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    string s;
    cin>>s;
    int ans=0;
    for(auto i : s)
    {
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='1' || i=='3' || i=='5' || i=='7' || i=='9')
        ans++;
    }
    cout<<ans<<endl;
}


