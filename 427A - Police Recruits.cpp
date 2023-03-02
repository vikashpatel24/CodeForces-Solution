#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n;
    cin>>n;
    int recrime[n];
    for(int i=0;i<n;i++)
    {
        cin>>recrime[i];
    }
    int availoff=0;
    int untcrimes=0;
    for(int i=0;i<n;i++)
    {
        if(recrime[i]!=-1)
        {
        availoff+=recrime[i];
        }
        else
        {
            if(availoff>0)
            {
                availoff--;
            }
            else
            {
                untcrimes++;
            }
        }
    }
    cout<<untcrimes<<endl;
}