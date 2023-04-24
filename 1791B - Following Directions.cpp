//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool check(string s, int n)
{
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        y++;
        if(s[i]=='D')
        y--;
        if(s[i]=='R')
        x++;
        if(s[i]=='L')
        x--;
        if(x==1 && y==1)
        return 1;
    }
    return 0;
}
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
        cout<<((check(s,n))?"YES":"NO")<<endl;
    }
    return 0;
}