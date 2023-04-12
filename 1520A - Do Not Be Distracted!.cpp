//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel


bool checkV(vector<char> t, char ch) 
{
    for(auto i : t)
    {
        if(i==ch)
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
        string s;
        cin>>n>>s;
        vector<char> temp;
        int ans = 1;
        for(int i=0;i<n;i++)
        {
            if(checkV(temp, s[i]))
            {
                ans = 0;
                break;
            }
            if(s[i]!=s[i+1])
            temp.push_back(s[i]);
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
