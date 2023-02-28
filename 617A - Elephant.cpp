#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int ans = n%5==0 ? n/5 : n/5+1;
    cout<<ans<<endl;
}