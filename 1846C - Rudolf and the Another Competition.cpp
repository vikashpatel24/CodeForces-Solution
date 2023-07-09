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
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, h;
        cin>>n>>m>>h;
        vector<pair<ll, ll>> rank;
        for(ll j=0; j<n; j++)
        {
            ll p[m];
            for(ll i=0; i<m; i++)
            {
                cin>>p[i];
            }
            sort(p, p+m);
            ll t = h;
            ll penalty = 0, tt = 0;
            ll polls = 0;
            for(ll i=0; i<m; i++)
            {
                if(p[i] <= t)
                {
                    polls++;
                    penalty += tt + p[i];
                    tt += p[i];
                    t -= p[i];
                }
                else
                break;
            }
            rank.push_back({polls, penalty});
        }
        ll rpolls = rank[0].first;
        ll rpenalty = rank[0].second;
        ll c = 0;
        for(ll i=1; i<n; i++)
        {
            if(rpolls < rank[i].first)
            c++;
            else if(rpolls == rank[i].first)
            {
                if(rpenalty > rank[i].second)
                c++;
            }
        }
        if(n == 1 || c == 0)
        cout<<"1"<<endl;
        else
        cout<<c+1<<endl;
    }
    return 0;
}