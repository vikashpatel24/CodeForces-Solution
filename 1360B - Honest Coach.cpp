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
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int mini = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    mini = min(mini,abs(s[i]-s[j]));
                }
            }
        }
        cout<<mini<<endl;
    }
}
