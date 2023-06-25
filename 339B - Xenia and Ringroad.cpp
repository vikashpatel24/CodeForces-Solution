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
    
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i=1; i<=m; i++)
    {
        cin>>a[i];
    }
    long long time = a[1]-1;
    for(int i=2; i<=m; i++)
    {
        if(a[i] < a[i-1])
        time += (n-a[i-1] + a[i]);
        if(a[i] > a[i-1])
        time += (a[i]-a[i-1]);
    }
    cout<<time<<endl;
    return 0;
}