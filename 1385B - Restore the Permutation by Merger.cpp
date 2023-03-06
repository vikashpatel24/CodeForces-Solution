#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool visited(vector<int> ans, int x)
{
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==x)
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
        int a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        vector<int> temp;
        for(int i=0;i<2*n;i++)
        {
            if(!visited(temp,a[i]))
            {
                cout<<a[i]<<" ";
                temp.push_back(a[i]);
            }
            
        }
        cout<<endl;
    }
}