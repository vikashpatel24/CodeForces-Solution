#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(b<2 || c<4)
    {
    cout<<0<<endl;
    }
    else
    {
    while(a!=0)
    {
        if(a*2<=b && a*4<=c)
        {
            cout<<a*7<<endl;  // a + a*2 + a*4 = a * ( 1 + 2 +4 ) = a*7
            break;
        }
        else if(a*2>b || a*4>c)
        {
            a--;
        }
    }
    }
}
    







