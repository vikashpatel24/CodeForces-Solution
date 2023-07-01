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
        int n;
        cin>>n;
        int a[n];
        int T_initial = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            T_initial += a[i];
        }
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]*n >= T_initial)
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
    return 0;
}

