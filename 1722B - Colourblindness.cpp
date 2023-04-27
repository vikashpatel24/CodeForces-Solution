//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool check(string r1, string r2, int n)
{
    for(int i=0; i<n;i++)
    {
        if((r1[i]=='R' && r2[i]!='R') || (r2[i]=='R' && r1[i]!='R'))
        return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string r1,r2;
        cin>>r1>>r2;
        cout<<((check(r1, r2, n))?"YES":"NO")<<endl;
    }
    return 0;
}