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
int solve(unordered_map<char, int> alpha, string s)
{
    int n = s.size();
    if(n<2)
    return 0;
    int cost = 0;
    for(int i=1; i<n; i++)
    {
        cost += abs(alpha[s[i]]-alpha[s[i-1]]);
    }
    return cost;
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
        string keyb, s;
        cin>>keyb>>s;
        unordered_map<char, int> alpha;
        for(int i=0; i<26; i++)
        {
            alpha[keyb[i]] = i;
        }
        cout<<solve(alpha, s)<<endl;
    }
    return 0;
}













