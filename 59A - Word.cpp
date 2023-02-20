#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    string s;
    cin>>s;
    int u=0,l=0;
    string upper=s;
    string lower=s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            lower[i]=lower[i]+32;
            u++;
        }
        else
        {
            upper[i]=upper[i]-32;
            l++;
        }
    }
    if(l>=u)
    cout<<lower<<endl;
    else
    cout<<upper<<endl;
}
