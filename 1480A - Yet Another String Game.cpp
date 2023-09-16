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

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n; ++i) {
        if(i % 2 == 0) {
            if(s[i] == 'a')s[i] = 'b';
            else s[i] = 'a';
        } else {
            if(s[i] == 'z') s[i] = 'y';
            else s[i] = 'z';
        }
    }
    cout << s << '\n';
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
