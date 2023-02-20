#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

bool integer(double k)
    {
        if( k == (int) k) 
        return true;
        return false;
    }
int main()
{
    int n;
    cin>>n;
    double x=sqrt(1-(4*1*-(2*n)));
    if(integer(-1+x) || integer(-1-x))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;    
}
