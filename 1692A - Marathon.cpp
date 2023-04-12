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
        int d[4];
        int ans = 0;
        for(int i=0;i<4;i++)
        {
            cin>>d[i];
            if(d[i]>d[0] && i!=0)
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
