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
        int x,n,m;
        cin>>x>>n>>m;
        while(n-- && x>20)
        {
            x = x/2+10;
        }
        while(m-- && x>0)
        {
            x = x-10;
        }
        if(x>0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}