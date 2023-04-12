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
        int x;
        cin>>x;
        int n = x%10;
        int ans = (n-1)*10;
        string s = to_string(x);
        int a = s.size();
        ans += a*(a+1)/2;
        cout<<ans<<endl;
    }
    return 0;
}
