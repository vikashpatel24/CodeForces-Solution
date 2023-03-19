//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool visited(vector<pair<char,char>> ans , char ch) 
{
    for(auto i : ans)
    {
        if(i.first == ch)
        return true;
    }
    return false;
}

bool checkPos(vector<pair<char,char>> ans , char ch, char c)
{
    for(auto i : ans)
    {
        if(i.first==ch && i.second==c)
        return true;
    }
    return false;
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
        vector<pair<char,char>> ans;
        bool sol = true;
        for(int i=0;i<n;i++)
        {
            char c;
                if(i%2==0)
                c = 'o';
                else
                c = 'e';
            if(!visited(ans,s[i]))
            {
                ans.push_back(make_pair(s[i],c));
            }
            if(checkPos(ans,s[i],c))
            {
                continue;
            }
            else
            {
                sol = false;
                break;
            }
        }
        if(sol)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}