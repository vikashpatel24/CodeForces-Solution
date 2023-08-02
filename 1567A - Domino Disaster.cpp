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
        ll n;
        cin>>n;
        char s[n+1];
        string d;
        for(ll i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]=='L')
            d+='L';
            if(s[i]=='R')
            d+='R';
            if(s[i]=='U')
            d+='D';
            if(s[i]=='D')
            d+='U';
        }
        cout<<d<<endl;
    }
    return 0;
}
