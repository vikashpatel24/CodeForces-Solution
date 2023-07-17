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

string solve()
{
    int n, m , k;
    cin>>n>>m>>k;
    int x, y;
    cin>>x>>y;
    int t = (x+y) & 1;
    bool ans = 1;
    while(k--)
    {
        cin>>x>>y;
        if(((x+y) & 1) == t)
        ans = 0;
    }
    if(ans)
    return "YES";
    return "NO";
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
