//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel


int solve(int a[], int n)
{
    unordered_map<int, int> ump;
    for(int i=0;i<n;i++)
    {
        ump[a[i]]++;
        if(ump[a[i]]==3)
        return a[i];
    }
    return -1;
}
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
        cout<<solve(a,n)<<endl;
    }
    return 0;
}