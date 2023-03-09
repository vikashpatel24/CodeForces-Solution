#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s.push_back('0');
        int c=0;
        vector<int> subOnes;
        for(auto i : s)
        {
            if(i=='1')
            {
                c++;
            }
            else
            {
                subOnes.push_back(c);
                c=0;
            }
        }
        sort(subOnes.begin(), subOnes.end(), greater<int>());
        int ans=0;
        for(int i=0;i<subOnes.size();i++)
        {
            if(i%2==0)
            ans+=subOnes[i];
        }
        cout<<ans<<endl;
    }
}
