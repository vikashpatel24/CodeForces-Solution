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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        pair<int, int> t[n];
        for(int i=0; i<n; i++)
        {
            cin>>t[i].ff;
        }
        for(int i=0; i<n; i++)
        {
            cin>>t[i].ss;
        }
        sort(t, t+n);
        int currRam = k;
        for(int i=0; i<n; i++)
        {
            if(t[i].ff <= currRam)
            currRam += t[i].ss;
            else
            break;
        }
        cout<<currRam<<endl;
    }
    return 0;
}