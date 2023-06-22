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

int solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d = abs(a-b);
    int tp = d*2;
    if(a>tp || b>tp || c>tp || d == 1 || tp%2)
    return -1;
    if(c+d>=1 && c+d<=tp)
    return c+d;
    if(c-d>=1 && c-d<=tp)
    return c-d;
    return -1;
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
        cout<<solve()<<endl;
    }
    return 0;
}

