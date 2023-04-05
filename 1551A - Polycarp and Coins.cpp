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
        int c1=0, c2=0;
        if(n%3==0)
        {
            cout<<n/3<<" "<<n/3<<endl;
            continue;
        }
        if(n%3==1)
        {
            cout<<(n/3 + 1)<<" "<<n/3<<endl;
            continue;
        }
        cout<<(n/3)<<" "<<(n/3 + 1)<<endl;
    }
    return 0;
}