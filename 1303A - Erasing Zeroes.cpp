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
        string s;
        cin>>s;
        int l = 0;
        int r = s.size()-1;

        while(s[l]=='0'){
            l++;
        }
        
        while(s[r]=='0'){
            r--;
        }
        
        int ans = 0;
        for(int i=l;i<=r;i++)
        {
            if(s[i]=='0')
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}