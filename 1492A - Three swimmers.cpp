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
        ll m, a, b, c; 
        cin>>m>>a>>b>>c;
        ll ta = (a - (m % a)) % a;
        ll tb = (b - (m % b)) % b;
        ll tc = (c - (m % c)) % c;
        ll res = (ta < tb) ? ta : tb;
        res = (res < tc) ? res : tc;
        cout<<res<<endl;
    }
    return 0;
}