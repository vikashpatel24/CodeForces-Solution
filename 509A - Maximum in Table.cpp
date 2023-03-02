#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int solve(int r, int c)
{
    if(r==1 || c==1)
    return 1;
    int sum=0;
    int r1,c1;
    r1=r-1;
    c1=c-1;
    return sum + solve(r1,c) + solve(r,c1);
}

int main()
{
    int n;
    cin>>n;
    cout<<solve(n,n)<<endl;
}
