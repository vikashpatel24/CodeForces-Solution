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
string solve(string s, char c)
{
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i] == c && i%2 == 0)
        return "YES";
    }
    return "NO";
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
        string s;
        cin>>s;
        char c;
        cin>>c;
        cout<<solve(s, c)<<endl;
    }
    return 0;
}