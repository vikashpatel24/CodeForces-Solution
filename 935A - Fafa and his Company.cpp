//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int n;
    cin>>n;
    int l = 0;
    for(int i=1; i<=n/2; i++)
    {
        if((n-i)%i == 0)
        l++;
    }
    cout<<l<<endl;
    return 0;
}