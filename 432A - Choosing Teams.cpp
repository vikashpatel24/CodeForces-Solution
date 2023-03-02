#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n,k;
    cin>>n>>k;
    int partcpts[n];
    int Tmembers=0;
    for(int i=0;i<n;i++)
    {
        cin>>partcpts[i];
        if(5-partcpts[i]>=k)
        Tmembers++;
    }
    cout<<Tmembers/3<<endl;
}