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

string solve(string a, string b)
{
    int la = a.size(), lb = b.size();
    if(a[la-1] != b[lb-1])
    {
        if(a[la-1] > b[lb-1])
        return "<";
        return ">";
    }
    else
    {
        if(a[la-1] == 'S')
        {
            if(la > lb) 
            return "<";
            else if(la == lb)
            return "=";
            else
            return ">";
        }
        else if(a[la-1] == 'L')
        {
            if(la > lb) 
            return ">";
            else if(la == lb)
            return "=";
            return "<";
        }
        return "=";
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
        string a, b;
        cin>>a>>b;
        cout<<solve(a, b)<<endl;
    }
    return 0;
}
