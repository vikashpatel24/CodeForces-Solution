//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int solve(int n, int k)
{
    if(log2(n) < k)
    return n+1;
    return (int)pow(2, k);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        cout<<solve(n, k)<<endl;
    }
    return 0;
}
