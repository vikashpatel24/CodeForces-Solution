#include<bits/stdc++.h>
using namespace std;

//Code Written By: Vikash Patel

int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    int c=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]==a[i+1])
        c++;
    }
    cout<<c<<endl;
}