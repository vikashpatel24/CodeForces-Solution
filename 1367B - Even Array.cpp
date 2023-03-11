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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int od = 0, ev = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2 != a[i]%2)
            {
                if(a[i]%2 == 1)
                od++;
                else 
                ev++;
            }
        }
        if(od == ev)
        cout<<od<<endl;
        else
        cout<<-1<<endl;
    }
}