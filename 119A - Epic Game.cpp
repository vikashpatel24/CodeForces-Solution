#include<bits/stdc++.h>
using namespace std;

// Code written By: Vikash Patel

int gcd(int x,int y)
{
    int z;
    while((z=x%y)!=0)
    {
        x=y;
        y=z;
    }
    return y;
}

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    while (true)
    {
        n-=gcd(a,n);
        if(n==0)
        {
            cout<<0<<endl;
            break;
        }
        n-=gcd(b,n);
        if (n==0)
        {
            cout<<1<<endl;
            break;
        }
    }
}
