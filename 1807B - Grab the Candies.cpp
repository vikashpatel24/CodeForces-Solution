//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
 
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
        int a[n];
        vector<int> m(n,0);
        vector<int> b(n,0);
        int  e=0,f=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                m[e]=a[i];
                e++;
            }
            else
            {
                b[f]=a[i];
                f++;
            }
        }
        sort(m.begin(),m.end(),greater<int>());
        sort(b.begin(),b.end());
        int mi=0,bi=0;
        bool ans = true;
        for(int i=0;i<n;i++)
        {
            mi += m[i];
            bi += b[i];
            if(mi>bi)
            {
            continue;
            }
            else
            {
                ans = false;
                break;
            }
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}