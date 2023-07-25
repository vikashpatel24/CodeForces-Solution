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
       int n, m, k, H;
       cin>>n>>m>>k>>H;
       int h[n];
       int c = 0;
       int pmh = m*k - k;
       for(int i=0; i<n; i++)
       {
           cin>>h[i];
           int d = abs(H-h[i]);
           if(d != 0 && d%k == 0 && d<=pmh)
           c++;
       }
       cout<<c<<endl;
    }
    return 0;
}