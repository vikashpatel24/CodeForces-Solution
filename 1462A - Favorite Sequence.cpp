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
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int l = 0, r = n-1;
        while(l<r)
        {
            cout<<b[l]<<" ";
            l++;
            cout<<b[r]<<" ";
            r--;
        }
        if(n%2)
        cout<<b[r];
        cout<<endl;
    }
    return 0;
}