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
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long sum = a+b+c+n;
        long long maxi = max(a,max(b,c));
        if(sum%3==0 && sum/3>=maxi)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}