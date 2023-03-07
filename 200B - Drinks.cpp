#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n;
    cin>>n;
    int p[n];
    double tof=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        tof+=p[i];
    }
    cout<<fixed<<setprecision(12)<<(tof/(n*100))*100<<endl;
}