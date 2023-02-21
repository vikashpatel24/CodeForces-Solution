#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int k,r;
    cin>>k>>r;
    int n=1;
    while(true)
    {
        if((n*k)%10==0)
        break;
        else if((n*k)%10==r)
        break;
        else
        n++;
    }
    cout<<n<<endl;
}
    







