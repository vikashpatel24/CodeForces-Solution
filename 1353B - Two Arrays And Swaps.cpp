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
        int n,k;
        cin>>n>>k;
        int a[n], b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n, greater<int>());
        int maxSum = 0;
        for(int i=0;i<k;i++)
        {
            if(a[i]>b[i])
            maxSum += a[i];
            else
            maxSum += b[i];
        }
        for(int i=k;i<n;i++)
        {
            maxSum += a[i];
        }
        cout<<maxSum<<endl;
    }
    return 0;
}
