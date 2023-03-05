#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int QAQ=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
                {
                    QAQ++;
                }
            }
        }
    }
    cout<<QAQ<<endl;
}