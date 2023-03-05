#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n;
    cin>>n;
    int tFaces=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='T')
        tFaces+=4;
        else if(s[0]=='C')
        tFaces+=6;
        else if(s[0]=='O')
        tFaces+=8;
        else if(s[0]=='D')
        tFaces+=12;
        else
        tFaces+=20;
    }
    cout<<tFaces<<endl;
}