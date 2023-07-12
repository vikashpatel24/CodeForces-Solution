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
        ll n,d, a[105];
        cin>>n>>d;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        bool ok = false;
        for(ll i=1; i<n; i++)
        {
            if(a[i] + a[i-1] <= d)
            {
                ok = true;
                break;
            }
        }
        if(a[n-1] <= d || ok == true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}