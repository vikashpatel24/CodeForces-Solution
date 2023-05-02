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
        int c = 0;
        int j = n-1;
        for(int i=0; i<n/2; i++)
        {
            if(s[i]==s[j-i])
            break;
            if(s[i]!=s[j-i])
            c += 2;
        }
        cout<<n-c<<endl;
    }
    return 0;
}