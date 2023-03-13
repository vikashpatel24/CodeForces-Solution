#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        string s;
        cin>>s;
        int zero=0, one=0;
        for(auto i:s)
        {
            if(i == '0')
            zero++;
            else
            one++;
        }
        if((min(zero,one))%2)
        cout<<"DA"<<endl;
        else
        cout<<"NET"<<endl;
    }
}