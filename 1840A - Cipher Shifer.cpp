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
        string ans;
        char temp = s[0];
        for(int i=1; i<n; i++)
        {
            if(temp == s[i])
            {
                ans += s[i];
                temp = s[i+1];
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}