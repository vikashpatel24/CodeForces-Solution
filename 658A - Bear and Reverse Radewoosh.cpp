#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,c;
    cin>>n>>c;
    int p[n];
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
        for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    int Lp=0, Rp=0,lt=0,rt=0;
    for(int i=0;i<n;i++)
    {
        lt+=t[i];
        rt+=t[n-1-i];
        Lp+=max(0,p[i]-(c*lt));
        Rp+=max(0,p[n-1-i]-(c*rt));
    }
    if(Lp>Rp)
    cout<<"Limak"<<endl;
    else if(Lp<Rp)
    cout<<"Radewoosh"<<endl;
    else
    cout<<"Tie"<<endl;
}