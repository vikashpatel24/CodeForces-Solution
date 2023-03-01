#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int a=d1+d2+d3;
    int b=2*d1+2*d2;
    int c=2*d2+2*d3;
    int d=2*d1+2*d3;
    cout<<min(a,min(b,min(c,d)))<<endl;
}