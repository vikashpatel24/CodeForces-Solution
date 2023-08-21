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

int solve(int n)
{
    if(n%2 == 0)
    return 0;
    string s = to_string(n);
    bool ok = 0;
    for(int i=0; i<s.size(); i++)
    {
        if ((int(s[i]) - 48) % 2 == 0) 
        {
            ok = 1;
            break;
        }
    }
    if (ok == 0)
    return -1;
    else
    {
        if ((int(s[0]) - 48) % 2 == 0) 
        return 1;
        else
        return 2;
    }
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
        cout<<solve(n)<<endl;
    }
    return 0;
}