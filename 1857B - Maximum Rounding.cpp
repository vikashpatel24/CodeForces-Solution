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
    string s;
    cin>>s;
    int n = s.size(), idx = n;
    for(int i=n-1; i>=1; i--)
    {
        if(s[i] >= '5')
        {
            s[i-1]++;
            idx=i;  
        }
    } 
    for(int i=idx; i<n; i++)
    {
        s[i]='0';
    }
    if(s[0]>='5')
    {
        cout<<"1";
        for(int i=0; i<n; i++)
        {
            cout<<"0";
        }
        cout<<endl;
    }
    else
    cout<<s<<endl;
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