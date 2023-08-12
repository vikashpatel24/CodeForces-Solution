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

int solve()
{
    string s;
    cin>>s;
    string pi = "314159265358979323846264338327";
    int c = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == pi[i])
        c++;
        else
        break;
    }
    return c;
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
        cout<<solve()<<endl;
    }
    return 0;
}