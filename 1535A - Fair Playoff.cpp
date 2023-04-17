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
        int s[4];
        for(int i=0;i<4;i++)
        {
            cin>>s[i];
        }
        int m1 = max(s[0],s[1]);
        int m2 = max(s[2],s[3]);
        sort(s,s+4, greater<int>());
        if((s[0]==m1 && s[1]==m2) || (s[0]==m2 && s[1]==m1))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}