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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int s, e;
        int i = 0;
        while(i<n)
        {
            if(a[i] == 1)
            {
                s = i;
                break;
            }
            i++;
        }
        int j = n-1;
        while(j>=0)
        {
            if(a[j] == 1)
            {
                e = j;
                break;
            }
            j--;
        }
        int z = 0;
        for(int i=s; i<=e; i++)
        {
            if(a[i] == 0)
            z++;
        }
        cout<<z<<endl;
    }
    return 0;
}
