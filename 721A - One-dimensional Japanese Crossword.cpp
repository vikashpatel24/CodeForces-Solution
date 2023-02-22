#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    int d=0;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            c++;
            d=0;
            for(int j=i;j<n;j++)
            {
                if(s[j]=='B')
                d++;
                else
                break;
            }
            i+=d;
            ans.push_back(d);
        }
    }
    cout<<c<<endl;
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
    







