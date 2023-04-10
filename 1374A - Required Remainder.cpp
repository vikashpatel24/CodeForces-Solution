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
        int x,y,n,ans;
        cin>>x>>y>>n;
        ans = n - n % x + y;
        if(ans <= n)
        cout<<ans<<endl;
        else
        cout<<(n - n % x - (x - y))<<endl;
    }
    return 0;
}