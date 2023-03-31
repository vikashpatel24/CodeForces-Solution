//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int i=0; i<n; i++)
       {
           cin>>a[i];
       }
       bool beautiful = false;
       for(int i=0; i<n; i++)
       {
           if((i+1)>=a[i])
           {
               beautiful = true;
               break;
           }
       }
       if(beautiful)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
    return 0;
}
