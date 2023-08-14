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

int orginalPos(int a, string m)
{
    for(auto i : m)
    {
        if(i == 'D')
        {
            if(a == 9)
            a = 0;
            else
            a++;
        }
        else
        {
            if(a == 0)
            a = 9;
            else
            a--;
        }
    }
    return a;
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
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        string s[n];
        int moves[n];
        for(int i=0; i<n; i++)
        {
            cin>>b[i]>>s[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<orginalPos(a[i], s[i])<<" ";
        }
        cout<<endl;
    }
    return 0;
}