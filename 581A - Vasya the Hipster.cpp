#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int a,b;
    cin>>a>>b;
    int diff=min(a,b);
    int maxi=max(a,b);
    int same=(maxi-diff)/2;
    cout<<diff<<" "<<same<<endl;
}