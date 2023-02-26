#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n+1;i++)
    {
        s=s+to_string(i);
    }
    cout<<s[n-1]<<endl;
}