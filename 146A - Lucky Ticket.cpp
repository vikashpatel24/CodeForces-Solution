#include <bits/stdc++.h>
using namespace std;
//Code Written By: Vikash Patel

int main()
{
    int n;
    string s;
    cin>>n>>s;
    bool lucky=true;
    int lsum=0,rsum=0;
    int a=n/2;
    for(int i=0;i<n;i++) 
    {
        char c=s[i];
        if(c!='4'&&c!='7')
        {
        lucky=false;
        break;
        }
        int x=c - '0';
        if(i<a)
        lsum+=x;
        else
        rsum+=x;
        }
    if(lucky && lsum==rsum)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
} 
