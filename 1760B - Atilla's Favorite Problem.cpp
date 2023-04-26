//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
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
       string s;
       cin>>s;
       char c='a';
       for(int i=0;i<n;i++)
       {
           if(s[i]>c)
           c = s[i];
       }
       cout<<abs(97-c)+1<<endl;
    }
    return 0;
}