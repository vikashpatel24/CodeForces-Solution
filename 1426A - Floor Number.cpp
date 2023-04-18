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
        int n,x;
        cin>>n>>x;
        int ans = 1;
        for(int i=3;i<=n;)
        {
            i += x;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}