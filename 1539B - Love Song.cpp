//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int sum[n+1];
    sum[0] = 0;
    for(int i=1; i<=n; i++)
    {
        sum[i] = sum[i-1] + s[i-1]-96;
    }
    int l,r;
    for(int i=0; i<q; i++)
    {
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
    return 0;
}