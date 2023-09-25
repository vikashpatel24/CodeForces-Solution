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
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> ans;
    set<int> st;
    int x = 0;
    for(int i=n-1; i>=0; i--)
    {
        st.insert(a[i]);
        if(st.size() > x)
        {
            ans.push_back(a[i]);
            x++;
        }
    }
    int j = st.size();
    cout<<j<<endl;
    j--;
    for(j; j>=0; j--)
    {
        cout<<ans[j]<<" ";
    }
    cout<<endl;
    
    return 0;
}