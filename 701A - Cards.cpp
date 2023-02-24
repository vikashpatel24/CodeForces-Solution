#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum = (*min_element(a, a + n)) + (*max_element(a, a + n));
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
            cout<<i+1<<" " <<j+1<<endl;
            a[i]=-1;
            a[j]=-1;
            break;
            }
        }
    }
}