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
    
    int n, m, k;
    cin>>n>>m>>k;
    int pa[m+1];  // Players Army
    for(int i=1; i<=m+1; i++)
    {
        cin>>pa[i];
    }
    int fedor = pa[m+1];
    int pf = 0; // Potential Friends
    for(int i=1; i<=m; i++)
    {
        int check = pa[i] ^ fedor;
        if(__builtin_popcount(check) <= k)
        pf++;
    }
    cout<<pf<<endl;
    return 0;
}

