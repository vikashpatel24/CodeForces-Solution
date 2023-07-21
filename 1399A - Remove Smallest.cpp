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

string solve(int a[], int n)
{
    if(n == 1)
    return "YES";
    sort(a, a+n);
    int maxi = INT_MIN;
    for(int i=1; i<n; i++)
    {
        maxi = max(maxi, a[i]-a[i-1]);
    }
    if(maxi > 1)
    return "NO";
    return "YES";
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout<<solve(a, n)<<endl;
    }
    return 0;
}