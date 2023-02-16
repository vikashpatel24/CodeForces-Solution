#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    string m,n;
    cin>>m>>n;
    int l=m.size();
    string ans;
    for(int i=0;i<l;i++)
    {
        ans+=((m[i]-'0') ^ (n[i]-'0')) + '0'; 
        /* 
        Subtracting 0 converts char to int 
        Adding 0 converts int to char
        */
    }
    cout<<ans<<endl;
}





