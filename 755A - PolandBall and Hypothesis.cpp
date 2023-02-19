#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

bool isPrime(int x)
{
    if (x<=1)
    {
        return false;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int ans;
    for(int m=1;m<=1000;m++)
    {
        if(!isPrime(n*m+1))
        {
            ans=m;
            break;
        }
    }
    cout<<ans<<endl;
}





