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
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        string s1,s2;
        int x = -1;
        for(int i=0;i<n;i++)
        {
            if ((d+'0')>s[i]) 
            {
                x = i;
                break;
            }
        }
        if(x==-1)
        cout<<s<<d<<endl;
        else
        {
            s.insert(x, to_string(d));
            cout<<s<<endl;
        }
    }
    return 0;
}