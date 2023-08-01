//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int solve()
{
    int n;
    cin>>n;
    int a[n];
    int mini = INT_MAX, maxi = INT_MIN;
    int midx, mxdx;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<mini)
        {
            mini = a[i];
            midx = i;
        }
        if(a[i]>maxi)
        {
            maxi = a[i];
            mxdx = i;
        }
    }
    if(midx<mxdx)
    return min(min(mxdx + 1, n - midx), midx + 1 + n - mxdx);
    else
    return min(min(midx + 1, n - mxdx), mxdx + 1 + n - midx);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("/Users/vikash/Desktop/output.txt", "w", stdout);
    // #endif
    
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}