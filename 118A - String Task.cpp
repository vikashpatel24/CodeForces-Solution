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
    
    string s;
    cin>>s;
    string ans;
    for(auto i : s)
    {
        i = tolower(i);
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y')
        continue;
        else
        {
            ans += '.';
            ans += i;
        }
    }
    cout<<ans<<endl;
    return 0;
}