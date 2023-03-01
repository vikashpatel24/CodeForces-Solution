#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int total = 0;
    int i=1;
    while(i<=w)
    {
        total+=i*k;
        i++;
    }
    int p=total-n;
    if(p>0)
    cout<<p<<endl;
    else
    cout<<"0"<<endl;
}