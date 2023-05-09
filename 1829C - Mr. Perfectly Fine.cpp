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
        int n;
        cin>>n;
        int mini = INT_MAX, lmin = INT_MAX, rmin = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int m;
            string s;
            cin>>m>>s;
            if(s[0] == '1' and s[1] == '1')
            mini = min(mini,m);
            else if(s[0] == '1')
            lmin = min(lmin,m);
            else if(s[1] == '1')
            rmin = min(rmin,m);
        }
        if(mini!=INT_MAX) 
        {
            if(lmin!=INT_MAX and rmin!=INT_MAX) 
            cout<<min(mini,lmin+rmin);
            else
            cout<<mini;
        }
        else 
        {
            if(lmin != INT_MAX and rmin != INT_MAX) 
            cout<<(lmin+rmin);
            else 
            cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}