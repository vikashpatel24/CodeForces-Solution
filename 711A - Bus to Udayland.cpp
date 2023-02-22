#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int emptySeat(string x)
{
    if(x.substr(0,2)== "OO")
    {
        return -1;
    }
    else if(x.substr(3,2)=="OO")
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    
    bool empty=false;
    for(int i=0;i<n;i++)
    {
        if(emptySeat(s[i])==-1)
        {
            empty=true;
            s[i].replace(0,2,"++");
            break;
        }
        else if(emptySeat(s[i])==1)
        {
            empty=true;
            s[i].replace(3,2,"++");
            break;
        }
    }
    if(empty)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}
    







