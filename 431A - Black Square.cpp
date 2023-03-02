#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int calories=0;
    for(auto i : s)
    {
        if(i=='1')
        calories+=a1;
        else if(i=='2')
        calories+=a2;
        else if(i=='3')
        calories+=a3;
        else
        calories+=a4;
    }
    cout<<calories<<endl;
}