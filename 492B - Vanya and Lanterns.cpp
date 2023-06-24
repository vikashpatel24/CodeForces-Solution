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

double max(double a, double b)
{
    return a>b?a:b;
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
    
    int n, l;
    cin>>n>>l;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    double maxi = INT_MIN;
    for(int i=1; i<n ; i++)
    {
        maxi = max(maxi , a[i]-a[i-1]);
    }
    double ld = a[0];
    double rd = l - a[n-1];
    if(a[0] != 0 && a[n-1] != l)
    {
        cout<<fixed<<setprecision(10)<<max(maxi/2.0, max(ld, rd));
    }
    else if(a[0] != 0)
    {
        cout<<fixed<<setprecision(10)<<max(maxi/2.0, ld)<<endl;
    }
    else if(a[n-1] != l)
    {
        cout<<fixed<<setprecision(10)<<max(maxi/2.0, rd)<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(10)<<maxi/2.0<<endl;
    }
    return 0;
}