//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int lp = 0;
       for(int i=n/2; i<n; i++)
       {
           lp += pow(2,i);
       }
       int rp = pow(2,n);
       for(int i=1; i<n/2; i++)
       {
           rp += pow(2,i);
       }
       cout<<abs(lp-rp)<<endl;
    }
    return 0;
}