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
    string s;
    cin>>s;
    int c = 0;
    // int maxi = INT_MIN;
    s += "1";
    int ans = 0;
    for(auto i : s)
    {
        if(i == 'x')
        c++;
        else
        {
            if(c >=3 )
            ans += c - 2; 
            c = 0;
        }
    }
    if(ans>0)
    cout<<ans<<endl;
    else
    cout<<"0"<<endl;
    return 0;
}