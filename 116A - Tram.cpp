#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,a,b;
    cin>>n;
    int i=0,j=0;
    while(n--)
    {
        cin>>a>>b;
        i-=a;
        i+=b;
        if(i>j)
        j=i;
    }
    cout<<j<<endl;
}
