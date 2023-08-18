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

long long  fact(long long n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
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
    
    long long x,y;
    cin>>x>>y;
    if(x<y)
    {
        x=fact(x);
        cout<<x;
    }
    else
    {
        y=fact(y);
        cout<<y;
    }
    return 0;
}
