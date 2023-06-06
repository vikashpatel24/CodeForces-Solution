//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int fact(int n)
{
    if(n<2)
    return 1;
    else
    return n*fact(n-1);
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n, k, q;
       cin>>n>>k>>q;
       int t[n];
       int pd = 0;
       int ans = 0;
       for(int i = 0; i < n; i++)
       {
           cin>>t[i];
           if(t[i] <= q)
           pd++;
           else
           pd = 0;
           if(pd>=k)
           {
               ans += pd-k+1;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}