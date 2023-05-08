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
        int a[n];
        int maxi = 0;
        int c = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                c++;
                maxi = max(maxi,c);
            }
            else
            {
                c = 0;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}