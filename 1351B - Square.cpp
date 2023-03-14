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
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        int sideOfSqr = max(a1,b1);
        if(sideOfSqr*sideOfSqr == a1*b1 + a2*b2 && (sideOfSqr == max(a2,b2)))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}