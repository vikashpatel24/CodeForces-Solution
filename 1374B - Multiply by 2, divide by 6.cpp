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
        int c = 0;
        while(n!=1)
        {
            if(n%6==0)
            {
                n /= 6;
                c++;
            }
            else if(n%3==0)
            {
                n *= 2;
                c++;
            }
            else
            {
                c = -1;
                break;
            }
        }
        cout<<c<<endl;
    }
}