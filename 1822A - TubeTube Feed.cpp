//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,t;
        cin>>n>>t;
        int a[n];
        int b[n];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
        }
        int ent = 0;
        int ans = -1;
        int tt = 0;
        for(int i=1; i<=n; i++)
        {
            int tim = tt + a[i];
            if(tim<=t && b[i]>ent)
            {
                 ans = i;
                 ent = b[i];
            }
            tt++;
        }
        if(ans!=-1)
        cout<<ans<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}