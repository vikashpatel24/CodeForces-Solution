#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int kills=0;
    for(int i=1;i<=z;i++)
    {
        if(i%n==0 && i%m==0)
        kills++;
    }
    cout<<kills<<endl;
}
    







