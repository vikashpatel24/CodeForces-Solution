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
        int n, x;
        cin>>n>>x;
        bool ans = 1;
        n *= 2;
        int h[n];
        for(int i=0; i<n; i++)
        {
            cin>>h[i];
        }
        sort(h, h+n);
        n /= 2;
        for(int i=0; i<n; i++)
        {
            if(h[i]+x > h[n+i])
            {
                ans = 0;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}