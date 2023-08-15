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
        int xa, ya, xb, yb, xf, yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        if(yb == ya && yb == yf && xf >= min(xa, xb) && xf <= max(xa, xb))
        cout<<2+abs(xb-xa)<<endl;
        else if(xb == xa && xb == xf && yf >= min(ya, yb) && yf <= max(ya, yb))
        cout<<2+abs(yb-ya)<<endl;
        else
        cout<<abs(yb-ya) + abs(xb-xa)<<endl;
    }
    return 0;
}