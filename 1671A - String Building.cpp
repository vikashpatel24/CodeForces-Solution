//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel


bool solve(string s)
{
    int j = 0;
    int i;
    for(i=0; i<s.size(); i++)
    {
        string s1 = s.substr(j+i, 2);
        string s2 = s.substr(j+i, 3);
        if(s2 == "aaa" || s2 == "bbb")
        i += 3;
        else if(s1 == "aa" || s1 == "bb")
        i += 2;
        j = i;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool  ans = 1;
        for(int i=0; i<s.size(); i++)
        {
            int c = 1;
            while(s[i]==s[i+1] && i+1<s.size())
            {
                c++;
                i++;
            }
            if(c<2)
            {
                ans = 0;
                break;
            }
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}