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
        string s, c = "codeforces";
        cin>>s;
        int d = 0;
        for(int i=0; i<10; i++)
        {
            if(s[i]!=c[i])
            d++;
        }
        cout<<d<<endl;
    }
    return 0;
}