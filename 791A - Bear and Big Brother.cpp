#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int a,b;
    cin>>a>>b;
    int t=0;
    int tTime;
    while(true)
    {
        if(a>b)
        {
            tTime=t;
            break;
        }
        t++;
        a*=3;
        b*=2;
    }
    cout<<tTime<<endl;
}