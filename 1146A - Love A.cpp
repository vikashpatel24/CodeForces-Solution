#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    string s;
    cin>>s;
    int A=0,O=0;
    for(auto i : s)
    {
        if(i=='a')
        A++;
        else
        O++;
    }
    if(A>O)
    cout<<s.size()<<endl;
    else if(A==O)
    {
        cout<<s.size()-1<<endl;
    }
    else
    {
        cout<<s.size()-(O-A+1)<<endl;
    }
}