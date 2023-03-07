#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int x = min(k2,min(k5,k6));
    int d = k2-x;
    cout<<256*x + min(k3,d)*32<<endl; 
}