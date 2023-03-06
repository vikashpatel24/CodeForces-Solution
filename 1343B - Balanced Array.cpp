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
        int n;
        cin>>n;
        if((n/2)%2==0)
        {
            cout<<"YES"<<endl;
            int e=0;
            int o=0;
            for(int i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
                e+=i;
            }
            for(int i=1; i<n-2;i+=2){
                cout<<i<<" ";
                o+=i;
            }
            cout<<e-o<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}