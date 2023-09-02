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

void solve(int n, string s)
{
    int one = 0, zero = 0;
    for(auto i : s)
    if (i == 'n') one++; 
    else if (i == 'r')
    zero++;
    for(int i = 0; i < one; i++)
    cout<<"1 ";
    for(int i = 0; i < zero; i++)
    cout<<"0 ";
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
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    solve(n, s);
    return 0;
}