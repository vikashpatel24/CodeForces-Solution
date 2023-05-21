//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
 
    vector<pair<int, int>> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second = i;
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector <int> ans(n);
    for(int i=0; i<n; i++)
    {
        ans[a[i].second] = b[i];
    }
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    }
    return 0;
}
