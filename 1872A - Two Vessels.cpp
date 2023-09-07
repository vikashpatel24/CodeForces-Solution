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

int solve(int a, int b, int c)
{
    if(a == b)
    return 0;
    int mini = min(a, b);
    int maxi = max(a, b);
    double d = maxi - mini;
    if(d <= c)
    return 1;
    double part = d/2;
    double ans = part/c;
    if(ans == (int)ans)
    return ans;
    return ans+1;
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
        int a, b, c;
        cin>>a>>b>>c;
        cout<<solve(a, b, c)<<endl;
    }
    return 0;
}