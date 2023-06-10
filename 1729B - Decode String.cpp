//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        for(int i=0; i<n;)
        {
            if(s[i+2] == '0' && s[i+3] != '0')
            {
                ans += 96+stoi(s.substr(i,2));
                i += 3;
            }
            else
            {
                ans += 96+(s[i]-'0');
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
