#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

bool checkPrime(int x)
{
    if(x<=1)
    {
        return false;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}

int nextPrime(int n , int m)
{
    for(int i=n+1;i<=m;i++)
    {
        if(checkPrime(i))
        return i;
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(!checkPrime(m))
    cout<<"NO"<<endl;
    else if(nextPrime(n,m)==m)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
