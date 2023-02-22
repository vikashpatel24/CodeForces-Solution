#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    string feeling;
    feeling+="I hate";
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            feeling+=" that I love";
        }
        else
        {
            feeling+=" that I hate";
        }
    }
    feeling+=" it";
    cout<<feeling<<endl;
}