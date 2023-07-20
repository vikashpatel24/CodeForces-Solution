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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("/Users/vikash/Desktop/output.txt", "w", stdout);
    // #endif
    
    int n;
    cin>>n;
    map<int,int>mp;
    int guest[n];
    for(int i=0; i<n; i++)
    {
        int h,a;
        cin>>h>>a;
        mp[h]++;
        guest[i] = a;
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans+=mp[guest[i]];
    }
    cout<<ans<<endl;
    
    return 0;
}