//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

string solve(int w, int h, int n)
{
    int ans = 1;
    if(n == 1)
    return "YES";
    while(w % 2 == 0)
    {
        ans *= 2;
        w = w / 2;
    }
    while(h % 2 == 0)
    {
        ans *= 2;
        h = h / 2;
    }
    if(ans>=n)
    return "YES";
    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        cout<<solve(w, h, n)<<endl;
    }
    return 0;
}