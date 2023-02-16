#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n, m;
    cin>>n>>m;
    m%=(n*(n+1)/2);
    for(int i=1;i<=n;i++)
    {
        if(m<i)
        {
            break;
        }
        m-=i;
    }
    cout << m << endl;
}




