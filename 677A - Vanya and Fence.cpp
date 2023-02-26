#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,h;
    cin>>n>>h;
    int heights[n];
    int width=0;
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
        if(heights[i]<=h)
        width++;
        else
        width+=2;
    }
    cout<<width<<endl;
}