#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    long long n,x;
    cin>>n>>x;
    char op[n];
    long long ic[n];
    for(int i=0;i<n;i++)
    {
        cin>>op[i]>>ic[i];
    }
    long long dKids=0;
    for(int i=0;i<n;i++)
    {
        if(op[i]=='+')
        {
            x+=ic[i];
        }
        else
        {
            if(x>=ic[i])
            {
                x-=ic[i];
            }
            else
            {
                dKids++;
            }
        }
    }
    cout<<x<<" "<<dKids<<endl;
}