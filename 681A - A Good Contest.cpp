#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    string s[n];
    int b[n];
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>b[i]>>a[i];
    }
    bool good=false;
    for(int i=0;i<n;i++)
    {
        if(b[i]>=2400 && a[i]-b[i]>0)
        {
            good=true;
            break;
        }
        else
        {
            continue;
        }
    }
    if(good)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}