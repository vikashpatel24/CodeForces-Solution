#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        long long moves=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n/=2;
                moves++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                moves++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                moves++;
            }
            else
            {
                break;
            }
        }
        if(n==1)
        cout<<moves<<endl;
        else
        cout<<"-1"<<endl;
    }
}