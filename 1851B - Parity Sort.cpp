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

bool solve()
{
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    b = a;
    sort(b.begin(), b.end());
    for(int i=0; i<n; i++)
    {
        if(a[i]%2 != b[i]%2)
        return 0;
    }
    return 1;
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
        if(solve())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
