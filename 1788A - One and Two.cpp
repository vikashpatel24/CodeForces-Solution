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
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i] == 2;
    }
    ll total = 0;
    for(int i=0; i<n; i++)
    {
        total += a[i] == 2;
        if(total == sum - total)
        return i+1;
    }
    return -1;
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