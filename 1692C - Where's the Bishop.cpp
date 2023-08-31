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

void solve()
{
    char g[9][9];
    for (int i = 1; i <= 8; i++) 
    {
        for (int j = 1; j <= 8; j++) 
        {
            cin>>g[i][j];
        }
    }
    for (int i = 2; i <= 7; i++) 
    {
        for (int j = 2; j <= 7; j++)
        {
            if (g[i][j] == '#' && g[i - 1][j - 1] == '#' && g[i - 1][j + 1] == '#' && g[i + 1][j - 1] == '#' &&
                g[i + 1][j + 1] == '#') {
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
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
        solve();
    }
    return 0;
}